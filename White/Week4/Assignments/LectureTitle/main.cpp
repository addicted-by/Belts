#include <iostream>
#include <string>
using namespace std;


struct Specialization {
    string value;
    explicit Specialization(string new_value) {
        value = new_value;
    }
};

struct Course {
    string value;
    explicit Course(string new_value) {
        value = new_value;
    }
};

struct Week {
    string value;
    explicit Week(string new_value) {
        value = new_value;
    }
};

struct LectureTitle {
    string specialization;
    string course;
    string week;

    LectureTitle(Specialization new_specialization, Course new_course,
                 Week new_week){
        specialization = new_specialization.value;
        course = new_course.value;
        week = new_week.value;
    }
};

void PrintData(const LectureTitle& lecture) {
    cout << lecture.specialization << "\n" << lecture.course << "\n" << lecture.week;
}
int main() {

    LectureTitle title(
            Specialization("C++"),
            Course("White belt"),
            Week("4th")
    );
    PrintData(title);
    return 0;
}
