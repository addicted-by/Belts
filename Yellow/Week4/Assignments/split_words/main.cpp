#include <iostream>
#include <string>
#include <vector>

/*
 Compile error: b"/tmp/submission4xj51sxo/main.cpp:20:26: fatal error: use of undeclared identifier 'SplitIntoWords'\n  vector<string> words = SplitIntoWords(s);\n                         ^\n1 error generated.\n"


 */

std::vector<std::string> SplitIntoWords(const std::string& s) {
    std::string word;
    std::vector<std::string> words;
    auto it = std::begin(s);
    while (it != std::end(s)) {
        if (*it != ' ') {
            word += *it;
        }
        else {
            words.push_back(word);
            word = "";
        }
        ++it;
    }
    words.push_back(word);
    return words;
}
/*

int main() {
    std::string s = "C";
    std::vector<std::string> words = SplitIntoWords(s);
    std::cout << words.size() << " ";
    for (auto it = begin(words); it != end(words); ++it) {
        if (it != begin(words)) {
            std::cout << "/";
        }
        std::cout << *it;
    }
    std::cout << std::endl;

    return 0;
}
*/
