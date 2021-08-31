#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

void Permutations(int n) {
    std::vector<int> x(n);
    std::iota(x.rbegin(), x.rend(), 1);
    do {
        for (auto i : x) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } while (std::prev_permutation(x.begin(), x.end()));
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    std::iota(x.rbegin(), x.rend(), 1);
    do {
        for (auto i : x) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } while (std::prev_permutation(x.begin(), x.end()));
    return 0;
}
