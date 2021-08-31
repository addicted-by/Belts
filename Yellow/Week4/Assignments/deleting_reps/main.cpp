#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

#pragma region Lecture

template<typename It>
void PrintRange(It range_begin, It range_end) {
    for (auto it = range_begin; it != range_end; ++it) {
        std::cout << *it << " ";
    }
}
int main() {
    std::vector<std::string> langs = {"Python", "C", "C++",
                                      "Java", "Haskell", "Lisp",
                                      "C#", "Ruby", "R"};
    /*auto it = std::find_if(std::rbegin(langs), std::rend(langs),
                           [](const std::string& lang) {
        return lang[0] == 'C';
    });
    std::cout << *it << std::endl;
    *//*auto it = std::remove_if(std::begin(langs), std::end(langs),
                   [](const std::string& lang) {
        return lang[0] == 'C';
    });
    //auto it = std::unique(std::begin(langs), std::end(langs));
    //langs.erase(it, std::end(langs));
    //PrintRange(std::begin(langs), std::end(langs));
    //auto it = std::min_element(std::begin(langs), std::end(langs));
    auto p = std::minmax_element(std::begin(langs), std::end(langs));
    std::cout << *p.first << " " <<  *p.second << std::endl;
    std::vector<std::string> langs1 = {
            "Python", "C++", "C", "Java", "C#"
    };
    auto p1 = minmax_element(begin(langs1), end(langs1));
    std::cout << *p1.first << ' ' << *p1.second;

    auto it = std::partition(begin(langs), end(langs),
                   [](const std::string& lang) {
        return lang[0] == 'C';
    });
    PrintRange(std::begin(langs), it);
    PrintRange(it, std::end(langs));
    std::set<int> a = {1, 3, 3};
    std::set<int> b = {3, 6, 1};
    std::set<int> res;
    std::set_intersection(std::begin(a), std::end(a),
                          std::begin(b), std::end(b),
                          std::inserter(res, res.end()));
    PrintRange(std::begin(res), res.end());
    std::vector<std::string> c_family;
    std::copy_if(langs.begin(), langs.end(), std::back_inserter(c_family),
                 [](const std::string& lang) {
        return lang[0] == 'C';
    });
    std::cout << std::endl;
    PrintRange(c_family.begin(), c_family.end());*/
    std::vector<std::string> c_family;
    auto it = std::find_if(langs.begin(), langs.end(),
                 [](const std::string& lang) {
                     return lang[0] == 'C';
                 });
    std::cout << it - langs.begin() << std::endl;
    return 0;
}

#pragma endregion


#pragma region Task
/*
template<typename T>
void RemoveDuplicates(std::vector<T>& elements) {
    std::sort(std::begin(elements), std::end(elements));
    auto it = std::unique(std::begin(elements), std::end(elements));
    elements.erase(it, std::end(elements));
}
int main(void) {
    std::vector<int> v1 = {6, 4, 7, 6, 4, 4, 0, 1};
    RemoveDuplicates(v1);
    for (int x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> v2 = {"C", "C++", "C++", "C", "C++"};
    RemoveDuplicates(v2);
    for (const std::string &s : v2) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}*/
#pragma endregion