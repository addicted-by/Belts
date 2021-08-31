#include <iostream>
#include <deque>
#include <string>

struct Operation {
    std::string operation = " ";
    int value = 0;
    Operation() = default;
};

std::istream& operator>>(std::istream& is, Operation& operation) {
    is >> operation.operation;
    is >> operation.value;
    return is;
}

/*int main() {
    int number;
    std::cin >> number;
    std::deque<std::string> expression;
    expression.push_back(std::to_string(number));
    int q; std::cin >> q;
    for (int i = 0; i < q; ++i) {
        Operation new_operation;
        std::cin >> new_operation;
        expression.push_front("(");
        expression.push_back(")");
        expression.push_back(" ");
        expression.push_back(new_operation.operation);
        expression.push_back(" ");
        expression.push_back(std::to_string(new_operation.value));
    }
    for (const auto& i : expression) {
        std::cout << i;
    }
    return 0;
}*/


#pragma region without brackets


bool Brackets(std::string prev, std::string now) {
    if ((prev == "-" || prev == "+") && (now == "*" || now == "/"))
        return true;
    return false;
}

int main() {
    int number;
    std::cin >> number;
    std::deque<std::string> expression;
    expression.push_back(std::to_string(number));
    int q; std::cin >> q;
    Operation last_operation;
    for (int i = 0; i < q; ++i) {
        Operation new_operation;
        std::cin >> new_operation;
        if (Brackets(last_operation.operation, new_operation.operation)) {
            expression.push_front("(");
            expression.push_back(")");
            expression.push_back(" ");
            expression.push_back(new_operation.operation);
            expression.push_back(" ");
            expression.push_back(std::to_string(new_operation.value));
        } else {
            expression.push_back(" ");
            expression.push_back(new_operation.operation);
            expression.push_back(" ");
            expression.push_back(std::to_string(new_operation.value));
        }
        last_operation.operation = new_operation.operation;
    }
    for (const auto& i : expression) {
        std::cout << i;
    }
    return 0;
}
#pragma endregion