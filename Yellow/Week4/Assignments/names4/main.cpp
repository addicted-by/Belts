#include <iostream>
#include <string>
#include <map>
#pragma region QuickSort
/*template <typename RandomIt, typename Compare>
void QuickSort(RandomIt first, RandomIt last, Compare compare)
{
    if (std::distance(first, last)>1){
        RandomIt bound = Partition(first, last, compare);
        QuickSort(first, bound, compare);
        QuickSort(bound+1, last, compare);
    }
}

template <typename RandomIt, typename Compare>
RandomIt Partition(RandomIt first, RandomIt last, Compare compare)
{
    auto pivot = std::prev(last, 1);
    auto i = first;
    for (auto j = first; j != pivot; ++j){
        if (compare(*j, *pivot)){
            std::swap(*i++, *j);
        }
    }
    std::swap(*i, *pivot);
    return i;
}*/
#pragma endregion


#pragma region Person

std::string FindNameByYear(const std::map<int, std::string>& names, int year) {
    std::string name;
    auto it = names.upper_bound(year);
    if (it != names.begin()) {
        name = (--it)->second;
    }
    return name;
}

class Person {
public:
    void ChangeFirstName(int year, const std::string& first_name) {
        first_names[year] = first_name;
        // добавить факт изменения имени на first_name в год year
    }
    void ChangeLastName(int year, const std::string& last_name) {
        last_names[year] = last_name;
        // добавить факт изменения фамилии на last_name в год year
    }
    std::string GetFullName(int year) {
        // получить имя и фамилию по состоянию на конец года year
        // с помощью двоичного поиска
        const std::string first_name = FindNameByYear(first_names, year);
        const std::string last_name = FindNameByYear(last_names, year);

        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        } else if (first_name.empty()) {
            return last_name + " with unknown first name";
        } else if (last_name.empty()) {
            return first_name + " with unknown last name";
        } else {
            return first_name + " " + last_name;
        }
    }
private:
    std::map<int, std::string> last_names;
    std::map<int, std::string> first_names;
    // приватные поля
};


int main() {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        std::cout << person.GetFullName(year) << "\n";
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << "\n";
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << "\n";
    }

    return 0;
}

#pragma endregion