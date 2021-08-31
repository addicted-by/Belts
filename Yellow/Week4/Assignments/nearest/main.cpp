#include <iostream>
#include <algorithm>
#include <set>

std::set<int>::const_iterator FindNearestElement(
        const std::set<int>& numbers,
        int border) {
    const auto nearest_element = numbers.lower_bound(border);
    if (nearest_element == numbers.begin()) {
        return nearest_element;
    }
    const auto less = prev(nearest_element);
    if (nearest_element == numbers.end()) {
        return less;
    }
    return (border - *less <= *nearest_element - border) ? less : nearest_element;
}

int main() {
    std::set<int> numbers = {1, 4, 6};
    std::cout <<
         *FindNearestElement(numbers, 0) << " " <<
         *FindNearestElement(numbers, 3) << " " <<
         *FindNearestElement(numbers, 5) << " " <<
         *FindNearestElement(numbers, 6) << " " <<
         *FindNearestElement(numbers, 100) << std::endl;

    std::set<int> empty_set;

    std::cout << (FindNearestElement(empty_set, 8) == end(empty_set)) << std::endl;
    return 0;
}
