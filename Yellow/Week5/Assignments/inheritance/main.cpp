#include <iostream>


class Animal {
public:
    Animal(const std::string& name): name_(name) {}
    const std::string name_;
};


class Dog : public Animal {
public:
    Dog(const std::string& name): Animal(name) {}
    void Bark() {
        std::cout << name_ << " barks: woof!" << std::endl;
    }
};