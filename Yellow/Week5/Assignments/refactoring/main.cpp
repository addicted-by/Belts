#include <iostream>
#include <string>
#include <vector>

struct Human {
    Human(const std::string& name, const std::string& liberty): name(name), liberty(liberty) {}
    virtual void Walk(const std::string& destination) const {
        std::cout << Log() << " walks to: " << destination << "\n";
    };
    const std::string GetLiberty() const {
        return liberty;
    }
    const std::string GetName() const {
        return name;
    }
    const std::string Log() const {
        return liberty + ": " + name;
    }
private:
    const std::string name;
    const std::string liberty;
};

struct Student: public Human {
public:

    Student(const std::string& name, const std::string& favourite_song):
                                            Human(name, "Student"),
                                            favourite_song(favourite_song) {}
    void Learn() const {
        std::cout << Log() << " learns" << "\n";
    }

    void Walk(const std::string& destination) const override {
        this->Human::Walk(destination);
        SingSong();
    }
    void SingSong() const {
        std::cout << Log() << " sings a song: " << favourite_song << "\n";
    }
public:
    const std::string favourite_song;
};


struct Teacher: Human {
public:

    Teacher(const std::string& name, const std::string& subject) : Human(name, "Teacher"), subject(subject) {}

    void Teach() const {
        std::cout << Log() << " teaches: " << subject << "\n";
    }

public:
    const std::string subject;
};

struct Policeman: Human {
public:
    Policeman(const std::string& name): Human(name, "Policeman") {}
    void Check(const Human& h) const {
        std::string human_in_trouble = h.GetName();
        std::string his_liberty = h.GetLiberty();
        std::cout << Log() << " checks " << his_liberty << ". " << his_liberty << "'s name is: " << human_in_trouble << "\n";
    }

};

void VisitPlaces(Human& h, const std::vector<std::string>& places) {
    for (const auto& p : places) {
        h.Walk(p);
    }
}

int main() {
    Teacher t("Jim", "Math");
    Student s("Ann", "We will rock you");
    Policeman p("Bob");

    VisitPlaces(t, {"Moscow", "London"});
    p.Check(s);
    VisitPlaces(s, {"Moscow", "London"});
    return 0;
}
