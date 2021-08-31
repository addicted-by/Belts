#pragma once
#include "date.h"
#include <string>
#include <memory>
enum struct Comparison {
    Less,
    Greater,
    LessOrEqual,
    GreaterOrEqual,
    Equal,
    NotEqual
};
enum struct LogicalOperation {
    Or,
    And
};

struct Node {
    virtual bool Evaluate(const Date& date, const std::string& event) const = 0;
};

struct DateComparisonNode: public Node {
    DateComparisonNode(const Comparison& comparison, const Date& date);
    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    const Comparison comparison;
    const Date date;
};

struct EventComparisonNode: public Node {
    EventComparisonNode(const Comparison& comparison, const std::string& event);
    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    const Comparison comparison;
    const std::string event;
};

struct EmptyNode: public Node {
    EmptyNode() {}
    bool Evaluate(const Date& date, const std::string& event) const override;
};

struct LogicalOperationNode: public Node {
    LogicalOperationNode(LogicalOperation operation, std::shared_ptr<Node> lhs,
                         std::shared_ptr<Node> rhs);
    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    std::shared_ptr<Node> lhs, rhs;
    const LogicalOperation operation;
};

