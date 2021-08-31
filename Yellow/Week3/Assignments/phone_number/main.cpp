#include <iostream>
#include "phone_number.cpp"
int main() {
    PhoneNumber p("+7-333");
    std::cout << p.GetInternationalNumber() << std::endl;
    return 0;
}
