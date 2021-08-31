/*
#include <iostream>
#include <algorithm>
#include <vector>

int counter = 0;

#pragma region mergesort_div_2
template<typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end) {
    if (range_end - range_begin < 2) {
        return;
    }
    std::vector<typename RandomIt::value_type> elements(range_begin, range_end);
    for (auto iter = range_begin; iter != range_end; ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl << "There was " << counter << " launch\n-------------------------------"
                                                         "-----------------------\n";
    counter++;
    auto it = elements.begin() + (range_end - range_begin) / 2;
    MergeSort(it, elements.end());
    MergeSort(elements.begin(), it);
    std::cout << *elements.begin() << " " << *it << " " << *(elements.end()-1) << " " << *range_begin << std::endl;
    std::merge(elements.begin(), it, it, elements.end(), range_begin);
}

int main() {
    std::vector<int> v = {6, 4, 7, 6, 4, 4, 0, 1};
    MergeSort(begin(v), end(v));
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
#pragma endregion

#pragma region mergesort_div3

*/
/*template<typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end) {
    if (range_end - range_begin < 2) {
        return;
    }
    std::vector<typename RandomIt::value_type> elements(range_begin, range_end);
    auto it1 = elements.begin() + (range_end - range_begin) / 3;
    auto it2 = it1 + elements.size() / 3;
    MergeSort(it1, it2);
    MergeSort(elements.begin(), it1);
    MergeSort(it2, elements.end());
    std::vector<typename RandomIt::value_type> tmp;
    std::merge(elements.begin(), it1, it1, it2, std::back_inserter(tmp));
    std::merge(tmp.begin(), tmp.end(), it2, elements.end(), range_begin);
}
int main() {
    std::vector<int> v = {6, 4, 7, 6, 4, 4, 0, 1, 5};
    MergeSort(begin(v), end(v));
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}*//*

#pragma endregion*/
#include <iostream>
#include <string>
#include <algorithm>
#include <set>


template <typename RandomIt>
std::pair<RandomIt, RandomIt> FindSegment(
        RandomIt range_begin, RandomIt range_end, int left, int right) {
    return {lower_bound(range_begin, range_end, left),
            lower_bound(range_begin, range_end, right)};
}

int main(void) {
    std::set<int> s = {1, 5, 7, 8, 3, 2, 1};
    auto x = FindSegment(s.begin(), s.end(), 2, 5);
    std::cout << *x.first << " " << *x.second << std::endl;
    return 0;
}