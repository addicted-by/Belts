#include <iostream>
#include "sum_reverse_sort.cpp"
int main() {
    std::cout << Sum(1,2) << std::endl;
    std::cout << Reverse("") << std::endl;
    std::vector<int> x = {1,2,0,-1,2,4,3};
    Sort(x);
    for (auto item : x) {
        std::cout << item << ' ';
    }

    return 0;
}
