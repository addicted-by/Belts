#include "sum_reverse_sort.h"
#include <algorithm>

int Sum(int x, int y) {
    return x + y;
}

std::string Reverse(std::string s) {
    std::string reversed = "";
    for (size_t i = 1; i <= s.size(); ++i) {
        reversed += s[s.size() - i];
    }
    return reversed;
}

void Sort(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
}
