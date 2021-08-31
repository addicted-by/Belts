#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

enum class Gender {
    FEMALE,
    MALE
};

struct Person {
    int age;
    Gender gender;
    bool is_employed;
};

template<typename InputIt>
int ComputeMedianAge(InputIt range_begin, InputIt range_end) {
    if (range_begin == range_end) {
        return 0;
    }
    std::vector<typename InputIt::value_type> range_copy(range_begin, range_end);
    auto middle = begin(range_copy) + range_copy.size() / 2;
    nth_element(
            begin(range_copy), middle, end(range_copy),
            [](const Person& lhs, const Person& rhs) {
                return lhs.age < rhs.age;
            }
    );
    return middle->age;
}

void PrintStats(std::vector<Person> persons) {
    auto gender_it = std::partition(persons.begin(), persons.end(),
                                    [](const Person& person) {
        return person.gender == Gender::FEMALE;
    });
    auto employed_female_it = std::partition(persons.begin(), gender_it,
                                             [](const Person& person) {
        return person.is_employed;
    });
    auto employed_male_it = std::partition(gender_it, persons.end(),
                                             [](const Person& person) {
                                                 return person.is_employed == true;
                                             });
    std::cout << "Median age = " << ComputeMedianAge(persons.begin(),persons.end()) << std::endl
        << "Median age for females = " << ComputeMedianAge(persons.begin(), gender_it) << std::endl
        << "Median age for males = " << ComputeMedianAge(gender_it, persons.end()) << std::endl
        << "Median age for employed females = " << ComputeMedianAge(persons.begin(), employed_female_it) << std::endl
        << "Median age for unemployed females = " << ComputeMedianAge(employed_female_it, gender_it) << std::endl
        << "Median age for employed males = " << ComputeMedianAge(gender_it, employed_male_it) << std::endl
        << "Median age for unemployed males = " << ComputeMedianAge(employed_male_it, persons.end());
}



int main() {
    std::vector<Person> persons = {
            {31, Gender::MALE, false},
            {40, Gender::FEMALE, true},
            {24, Gender::MALE, true},
            {20, Gender::FEMALE, true},
            {80, Gender::FEMALE, false},
            {78, Gender::MALE, false},
            {10, Gender::FEMALE, false},
            {55, Gender::MALE, true},
    };
    PrintStats(persons);
    return 0;
}

