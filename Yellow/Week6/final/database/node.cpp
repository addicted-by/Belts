#include "node.h"


EventComparisonNode::EventComparisonNode(const Comparison& comparison, const std::string& event):
                                                    comparison(comparison), event(event) {}

DateComparisonNode::DateComparisonNode(const Comparison& comparison, const Date& date):
                                                    comparison(comparison), date(date) {}
bool EventComparisonNode::Evaluate(const Date &date, const std::string &event) const {
    if (comparison == Comparison::Equal) {
        return event == this->event;
    } else {
        return event != this->event;
    }
}

bool DateComparisonNode::Evaluate(const Date &date, const std::string &event) const {
    switch (comparison) {
        case Comparison::Less:
            return date < this->date;

        case Comparison::LessOrEqual:
            return date <= this->date;

        case Comparison::Greater:
            return date > this->date;

        case Comparison::GreaterOrEqual:
            return date >= this->date;

        case Comparison::Equal:
            return date == this->date;

        case Comparison::NotEqual:
            return !(date == this->date);
    }
    throw std::invalid_argument("Invalid comparison operator");
}


bool EmptyNode::Evaluate(const Date &date, const std::string &event) const {
    return true;
}

LogicalOperationNode::LogicalOperationNode(LogicalOperation operation, std::shared_ptr<Node> lhs,
                                           std::shared_ptr<Node> rhs): operation(operation), lhs(lhs), rhs(rhs) {}

bool LogicalOperationNode::Evaluate(const Date &date, const std::string &event) const {
    if (operation == LogicalOperation::And) {
        return (lhs->Evaluate(date, event) == true && rhs->Evaluate(date, event) == true);
    } else {
        return (lhs->Evaluate(date, event) == true || rhs->Evaluate(date, event) == true);
    }
}