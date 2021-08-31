#include <iostream>
#include <cmath>
#include <memory>
#include <vector>
#include <sstream>
#include <iomanip>

struct Figure {
    virtual std::string Name() const = 0;
    virtual double Perimeter() const = 0;
    virtual double Area() const = 0;
};
const double pi = 3.14;
struct Rect: public Figure {
    Rect(double width, double height): width(width), height(height) {}
    std::string Name() const override {
        return "RECT";
    }
    double Perimeter() const override {
        return 2 * (width + height);
    }
    double Area() const override {
        return width * height;
    }
private:
    double width;
    double height;
};

struct Triangle: public Figure {
    Triangle(double a, double b, double c): a(a), b(b), c(c) {}
    std::string Name() const override {
        return "TRIANGLE";
    }
    double Perimeter() const override {
        return a + b + c;
    }
    double Area() const override {
        double p = Perimeter() / 2.0;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
private:
    double a;
    double b;
    double c;
};

struct Circle: public Figure {
    Circle(double r): r(r) {}

    std::string Name() const override {
        return "CIRCLE";
    }
    double Perimeter() const override {
        return 2*pi * r;
    }
    double Area() const override {
        return pi * r * r;
    }
private:
    double r;
};

std::shared_ptr<Figure> CreateFigure(std::istream& istream) {
    std::string figure;
    istream >> figure;
    if (figure == "RECT") {
        double width, height;
        istream >> width >> height;
        return std::make_shared<Rect>(width, height);
    } else if (figure == "TRIANGLE") {
        double a, b, c;
        istream >> a >> b >> c;
        return std::make_shared<Triangle>(a, b, c);
    } else {
        double r;
        istream >> r;
        return std::make_shared<Circle>(r);
    }
}
int main() {
    std::vector<std::shared_ptr<Figure>> figures;
    for (std::string line; getline(std::cin, line); ) {
        std::istringstream is(line);

        std::string command;
        is >> command;
        if (command == "ADD") {
            // Пропускаем "лишние" ведущие пробелы.
            // Подробнее об std::ws можно узнать здесь:
            // https://en.cppreference.com/w/cpp/io/manip/ws
            is >> std::ws;
            figures.push_back(CreateFigure(is));
        } else if (command == "PRINT") {
            for (const auto& current_figure : figures) {
                std::cout << std::fixed << std::setprecision(3)
                     << current_figure->Name() << " "
                     << current_figure->Perimeter() << " "
                     << current_figure->Area() << std::endl;
            }
        }
    }
    return 0;
}
