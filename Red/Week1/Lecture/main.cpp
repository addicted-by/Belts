#include <iostream>
#include <type_traits>

#pragma region 6.8. Variadic templates
/*template<typename First, typename Second, typename... Tail>
struct is_homogeneous {
    static const bool value = std::is_same_v<First, Second> && is_homogeneous<Second, Tail...>::value;
};

template<typename T, typename U>
struct is_homogeneous<T, U> {
    static const bool value = std::is_same_v<T, U>;
};


void print() {
    endl(std::cout);
}

template<typename Head, typename... Tail>
void print(const Head& head, const Tail&... tail) {
    std::cout << head << " ";
    print(tail...);
}

template<typename Head, typename... Tail>
size_t size(const Head& head, const Tail&...) {
    return sizeof...(Tail);
}

int main(void) {
    print(1,2, "abc", 'a', 3.2);
    std::cout << is_homogeneous<int, int, int>::value << " ";
    std::cout << is_homogeneous<char, double, int, char>::value << std::endl;
    std::cout << size(1,2,"abc", 'a', 3.2);
}*/
#pragma endregion


#pragma region 6.9. Fold expressions. (since c++17)
/*
template<typename... Args>
void print(const Args&... args) {
    (std::cout << ... << args) << '\n';
}
*/

/*
 * (... op args) -> (((args1 op args2) op ...) op args_n)
 * (args op ...) ->  (args1 op (... op (args_{n-1} op args_n)))
 * (x op .. op args) -> (args1 op (... op(args_{n-1} op (args_n op x))))
 * (args op ... op x) -> ((((x op args_1) op args_2) op ...) op args_n)
 */

/*template<typename Head, typename... Tail>
struct is_homogeneous {
    static const bool value = (std::is_same_v<Head, Tail> && ...);
};


int main() {
    print(1,2, "aabc", 'a', 15, 4.1, 2e33);
    std::cout << is_homogeneous<int,int,int>::value << std::endl;
    std::cout << is_homogeneous<char, const double, long long, int>::value << std::endl;
    return 0;
}*/
#pragma endregion

#pragma region 6.10. Template deduction rules & guides.
/*#include <functional>
#include <vector>
template<typename T>
struct C {
    C() = delete;
};
template<typename T>
void f(T x) {
    C<T>();
    //std::cout << sizeof(T) << std::endl;
    //std::cout << std::is_reference_v<T> << std::endl;
}

int& g() {
    int x;
    return x;
}

template<typename T>
struct S {
    S(T x) {
        C<T>();
    }
};

//since c++17
S(const char*) -> S<std::string>;

template<typename T>
S(const T&) -> S<T>;

int main() {
    S s("abc");
    //c++17
    std::vector v(3,2.0);
    int x = 0;
    int& y = x;
    for (const auto& i : v) {
        std::cout << i << " ";
    }
    //f(std::ref(x)); //std::reference_wrapper<int>
    //f(std::cref(x)); // std::reference_wrapper<const int>
    //f(g());
    return 0;
}*/
#pragma endregion


/*template<typename Container, typename Index>
decltype(auto) operator[](Container& c, Index i) {
    return c[i];
} */


#pragma region 7.3. Exceptions and copying
/*struct S {
    S() {};
    S(const S&) {
        std::cout << "copy\n";
    }
    ~S() {
        std::cout << "destruct\n";
    }
};

void f() {
    S s;
    throw s; //copy threw
}

void g() {
    try {
        f();
    } catch (S& s) {
        std::cout << "caught\n";
        throw;
    }
}

int main() {
    try {
        g();
    } catch (S& s) {
        std::cout << "caught in main\n";
    }
}*/

#pragma endregion

#pragma region 7.4. Exceptions and type conversions.

/*struct Base {
    Base() {}
    Base(const Base&) {
        std::cout << "copy Base\n";
    }
};

struct Derived: public Base {
    Derived() {}
    Derived(const Derived&) {
        std::cout << "copy Derived\n";
    }
};



*//*void f() {
    throw 1;
}*//*

void f() {
    throw Derived(); //copy-elision
}

void g() {
    try {
        f();
    } catch (double x) {    //no
        std::cout << "caught double\n";
    } catch (long long x) {     //no
        std::cout << "caught long long\n";
    } catch (char x) {          //no
        std::cout << "caught char\n";
    } catch (unsigned int x) {      // no
        std::cout << "caught unsigned\n";
    } catch (int x) {   //yes (and for &, const int&, const)
        std::cout << "caught int\n";
    } catch (Base b) {     //yes
        std::cout << "caught Base\n";
        //throw b; //copy, object type Base
        throw; //not copy, object type Derived
    }
}

int main() {
    try {
        g();
    } catch (Derived&) {
        std::cout << "caught in main\n";
    } catch (...) {
        std::cout << "caught something\n";
    }
}*/

#pragma endregion

#pragma region Compile-Time Fibonacci
/*
template<int K>
struct Fib {
    static const long long value = Fib<K-1>::value + Fib<K-2>::value;
};

template<>
struct Fib<0> {
    static const long long value = 0;
};

template<>
struct Fib<1> {
    static const long long value = 1;
};

int main() {

    return 0;
}
*/
#pragma endregion


#pragma region Codewars (6kyo)
/*#include <cinttypes>
#include <string>
#include <algorithm>
uint64_t descendingOrder(uint64_t a) {
    auto string = std::to_string(a);
    std::sort(string.begin(), string.end());
    std::reverse(string.begin(), string.end());
    return std::stoi(string);
}

int main() {
    std::cout << descendingOrder(0) << std::endl;
    std::cout << descendingOrder(42145) << std::endl;
    std::cout << descendingOrder(1455263) << std::endl;
}*/
/*#include <map>
#include <cstring>
size_t count_duplicates(const char* string) {
    std::map<char, size_t> alphabet;
    for (size_t i = 0; i < std::strlen(string); ++i) {
        alphabet[std::tolower(string[i])]++;
    }
    size_t counter = 0;
    for (const auto& [letter, count] : alphabet) {
        if (count >= 2) {
            counter++;
        }
    }
    return counter;
}

int main() {
    std::cout << count_duplicates("abcde");
    std::cout << count_duplicates("aabbcde");
    std::cout << count_duplicates("aabBcde");
    std::cout << count_duplicates("indivisibility");
    std::cout << count_duplicates("Indivisibilities");
    std::cout << count_duplicates("aA11");
    std::cout << count_duplicates("ABBA");

}*/

/*#include <vector>
#include <unordered_map>
int findOdd(const std::vector<int>& numbers) {
    std::unordered_map<int, size_t> counts;
    for (const auto& number : numbers) {
        counts[number]++;
    }
    for (const auto& [number, count] : counts) {
        if (count % 2 != 0) {
            return number;
        }
    }
    return 0;
}

int main() {
    std::cout << findOdd({7});
    endl(std::cout);
    std::cout << findOdd({0});
    endl(std::cout);
    std::cout << findOdd({1,1,2});
    endl(std::cout);
    std::cout << findOdd({0,1,0,1,0});
    endl(std::cout);
    std::cout << findOdd({1,2,2,3,3,3,4,3,3,3,2,2,1});

}*/

/*#include <vector>
#include <string>
#include <unordered_map>

std::string tickets(const std::vector<int>& peopleInLine) {
    std::unordered_map<int, size_t> money;
    for (const auto& ticket : peopleInLine) {
        switch (ticket) {
            case 25:
                money[25]++;
                break;
            case 50:
                if (money[25] != 0) {
                    money[50]++;
                    money[25]--;
                } else {
                    return "NO";
                }
                break;
            case 100:
                if (money[25] >= 3) {
                    money[25] -= 3;
                    money[100]++;
                } else if (money[25] != 0 && money[50] != 0) {
                    money[25]--;
                    money[50]--;
                    money[100]++;
                } else {
                    return "NO";
                }
                break;
        }
    }
    return "YES";
}

int main() {
    std::cout << tickets({25,25,50});
    endl(std::cout);
    std::cout << tickets({25,100});
    endl(std::cout);
    std::cout << tickets({25, 25, 50, 50, 50});
    endl(std::cout);
    std::cout << tickets({100});
    endl(std::cout);
    std::cout << tickets({50,100});
    return 0;
}*/
#include <iostream>
#include <vector>
/*std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if (n < 3) {
        signature.resize(n);
    }
    for (int i = 3; i < n; ++i) {
        signature.push_back(signature.at(i - 3) + signature.at(i - 2) + signature.at(i - 1));
    }
    return signature;
}*/

std::string likes(const std::vector<std::string> &names)
{
    switch(names.size()) {
        case 0:
            return "no one likes this";
            break;
        case 1:
            return names[0] + " likes this";
            break;
        case 2:
            return names[0] + " and " + names[1] + " like this";
            break;
        case 3:
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
            break;
        default:
            return names[0] + ", " + names[1] + " and " + std::to_string(names.size()-2) + " others like this";
            break;
    }
}

int main() {

}
#pragma endregion