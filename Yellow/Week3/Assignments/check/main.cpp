#include <iostream>

class Metr {
private:
    int metr;
public:
    Metr(int metr): metr(metr) {}
    explicit operator int() {
        return metr;
    }
};

class Second {
private:
    int sec;
public:
    Second(int sec): sec(sec) {}
    explicit operator int() {
        return sec;
    }
};
Metr operator ""_m(unsigned long long x) {
    return Metr(x);
}
Second operator ""_s(unsigned long long x) {
    return Second(x);
}
int main() {
    Metr metr(5); Second sec(3);
    std::cout << metr + 1_m << std::endl;
    std::cout << sec + 3_s << std::endl;
    std::cout << sec + metr << std::endl;
    return 0;
}


/*class C {
    static C* obj;
    C() {}
    static const int x = 1;
public:
    static C& GetObject() {
        if (obj) return *obj;
        obj = new C();
        return *obj;
    }
};*/
//C* C::obj = nullptr;
