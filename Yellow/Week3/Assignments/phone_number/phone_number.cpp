#include <sstream>
#include "phone_number.h"

PhoneNumber::PhoneNumber(const std::string &international_number) {
    std::istringstream s(international_number);
    if (s.get() != '+') {
        throw std::invalid_argument("");
    }
    std::getline(s, country_code_, '-');
    std::getline(s, city_code_, '-');
    std::getline(s, local_number_);
    if (country_code_.empty()) {
        throw std::invalid_argument("");
    }
    if (city_code_.empty()) {
        throw std::invalid_argument(" ");
    }
    if (local_number_.empty()) {
        throw std::invalid_argument(" ");
    }
}

std::string PhoneNumber::GetCityCode() const {
    return city_code_;
}

std::string PhoneNumber::GetCountryCode() const {
    return country_code_;
}

std::string PhoneNumber::GetLocalNumber() const {
    return local_number_;
}

std::string PhoneNumber::GetInternationalNumber() const {
    return ('+' + country_code_ + '-' + city_code_ + '-' + local_number_);
}