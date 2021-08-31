#include <iostream>
#include <vector>
#include <string>

template<typename RandomIt>
std::pair<RandomIt, RandomIt> FindStartsWith(RandomIt range_begin,
                                             RandomIt range_end,
                                             char prefix) {
    return {std::lower_bound(range_begin, range_end, std::string(1, prefix)),
            std::lower_bound(range_begin, range_end, std::string(1, static_cast<char>(++prefix)))};
}
template<typename RandomIt>
std::pair<RandomIt, RandomIt> FindStartsWith(RandomIt range_begin,
                                             RandomIt range_end,
                                             const std::string& prefix) {
    std::string upper = prefix;
    ++upper[prefix.size() - 1];
    return {std::lower_bound(range_begin, range_end, prefix),
            std::lower_bound(range_begin, range_end, upper)};
}

/*int main() {
    const std::vector<std::string> sorted_strings = {"moscow", "murmansk", "vologda"};

    const auto m_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), 'm');
    for (auto it = m_result.first; it != m_result.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    const auto p_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), 'p');
    std::cout << (p_result.first - begin(sorted_strings)) << " " <<
         (p_result.second - begin(sorted_strings)) << "\n";

    const auto z_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), 'z');
    std::cout << (z_result.first - begin(sorted_strings)) << " " <<
         (z_result.second - begin(sorted_strings)) << "\n";

    return 0;
}*/
int main() {
    const std::vector<std::string> sorted_strings = {"moscow", "motovilikha", "murmansk"};

    const auto mo_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), "mo");
    for (auto it = mo_result.first; it != mo_result.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    const auto mt_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), "mt");
    std::cout << (mt_result.first - begin(sorted_strings)) << " " <<
              (mt_result.second - begin(sorted_strings)) << std::endl;

    const auto na_result =
            FindStartsWith(begin(sorted_strings), end(sorted_strings), "na");
    std::cout << (na_result.first - begin(sorted_strings)) << " " <<
              (na_result.second - begin(sorted_strings)) << std::endl;

    return 0;
}
