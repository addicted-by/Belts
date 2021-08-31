#include <iostream>
#include <set>
#include <vector>

template<typename T>
std::vector<T> FindGreaterElements(const std::set<T>& elements, const T& border) {
    auto it = begin(elements);
    while (it != end(elements) && *it <= border) {
        ++it;
    }
    return {it, end(elements)};
}
int main() {
    std::set<int> x{1, -1, 7, 8};
    for (int x : FindGreaterElements(std::set<int>{1, 5, 7, 8}, 5)) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::string to_find = "Python";
    std::cout << FindGreaterElements(std::set<std::string>{"C", "C++"}, to_find).size();
    return 0;
}
