#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#pragma region Lecture
struct Lang {
    std::string name;
    int age;
};
void PrintVectorPart(const std::vector<int>& numbers);
using LangIt = std::vector<Lang>::iterator;

template<typename It>
void PrintRange(It range_begin,
                It range_end) {
    for (auto it = range_begin; it != range_end; ++it) {
        std::cout << it->name << " ";
    }
}

int main() {

    /*std::vector<Lang> langs = {
            {"Python", 26},
            {"C++",    34},
            {"Java",   22},
            {"C",      45},
            {"C#",     17}
    };
    auto res = std::find_if(
            std::begin(langs), std::end(langs),
            [](const Lang& lang) {
                return lang.name[0] == 'C';
            });
    if (res == std::end(langs)) {
        std::cout << "Not found";
    }
    else {
        std::cout << res->age << std::endl;
    }
    std::cout << langs.front().name << std::endl;
    std::string lang = langs[1].name;
    auto it = std::begin(lang);
    std::cout << *it << std::endl;
    for (auto it = std::begin(langs); it != end(langs); ++it) {
        std::cout << it->name << " ";
    }
    std::cout << '\n' << "-----------------------"
                 "------------------------" << std::endl;
    PrintRange(std::begin(langs), std::end(langs));
    std::cout << std::endl;*/
    PrintVectorPart({6, 1, 8, -5, 4});
    std::cout << std::endl;
    PrintVectorPart({-6, 1, 8, -5, 4});  // ничего не выведется
    std::cout << std::endl;
    PrintVectorPart({6, 1, 8, 5, 4});

    return 0;
}
#pragma endregion

#pragma region Inheritance: accessibility and visibility
/*
struct A {
    A() {
        std::cout << "A" << std::endl;
    }
    ~A() {
        std::cout << "~A" << std::endl;
    }
};

struct B {
    B() {
        std::cout << "B" << std::endl;
    }
    ~B() {
        std::cout << "~B" << std::endl;
    }
};

struct Granny {
    int x = 0;

    Granny() {
        std::cout << "Granny" << std::endl;
    }
    ~Granny() {
        std::cout << "~Granny" << std::endl;
    }
    Granny(int x): x(x) {
        std::cout << "Granny" << x << std::endl;
    }
};

struct Mom: public Granny {
    A a;
    int y = 0;

    Mom() {
        std::cout << "Mom" << std::endl;
    }
    ~Mom() {
        std::cout << "~Mom" << std::endl;
    }
    Mom(int x) {
        std::cout << x << std::endl;
    }
};

struct Son: Mom {
    B b;
    int y = 0;

    Son() {
        std::cout << "Son" << std::endl;
    }
    ~Son() {
        std::cout << "~Son" << std::endl;
    }
    Son(int x): Mom(x), y(x) {
        std::cout << "Son(int)" << y << std::endl;
    }
};

int main() {
    Son s(5);
   // s.~Son();
    return 0;
}*/
#pragma endregion
#pragma region Fibonacci
/*#include <cassert>
#include <iostream>
#include <vector>
class Fibonacci final {
 public:
  static int get(int n) {
      assert(n >= 0);
      n++;
      std::vector<int> fib;
      fib.push_back(0); fib.push_back(1);
      for (int i = 2; i < n; ++i) {
          auto tmp = fib[i - 1] + fib[i - 2];
          fib.push_back(tmp);
      }
      return *(fib.end() - 1);
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  return 0;
}*/
#pragma endregion
#pragma region Fibonacci last digit

/*#include <cassert>
#include <iostream>
#include <vector>

class Fibonacci final {
public:
    static int get_last_digit(int n) {
        assert(n >= 1);
        n++;
        std::vector<int> fib_last_digits;
        fib_last_digits.push_back(0);
        fib_last_digits.push_back(1);
//        auto last_digit = 1;
        for (int i = 2; i < n; ++i) {
            auto tmp = (fib_last_digits[i - 1] + fib_last_digits[i - 2]) % 10;
            fib_last_digits.push_back(tmp);
        }
        return *(fib_last_digits.end() - 1);
    }
};

int main(void) {
    int n;
    std::cin >> n;
    std::cout << Fibonacci::get_last_digit(n) << std::endl;
    return 0;
}*/

#pragma endregion
#pragma region moreFibonacci
/*#include <cassert>
#include <cstdint>
#include <iostream>
#include <vector>
#include <math.h>
class Fibonacci final {
public:
    static int get_remainder(int64_t n, int m) {
        assert(n >= 1);
        assert(m >= 2);
        std::vector<int64_t> fib;
        fib.push_back(0);
        fib.push_back(1);
        auto t = 0;
        for (int64_t i = 2; i < static_cast<int64_t>(m * m + 1); ++i) {
            fib.push_back((fib[i - 1] + fib[i - 2]) % m);
            ++t;
            if ((fib[i] == 1) && (fib[i - 1] == 0))
                break;
        }
        return fib[(n % t)];
    }
};*/
#pragma endregion

#pragma region Task Part of Vector
void PrintVectorPart(const std::vector<int>& numbers) {
    auto it = std::find_if(std::begin(numbers), std::end(numbers),
                           [](int x) {
        return x < 0;
    });
    for (it; it != std::begin(numbers); ) {
        std::cout << *(--it) << " ";
    }
};

#pragma endregion
