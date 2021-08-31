#include "responses.h"

std::ostream& operator<< (std::ostream& os, const BusesForStopResponse& r) {
    if (r.buses.empty()) {
        os << "No stop";
    } else {
        for (const std::string &bus : r.buses) {
            os << bus << " ";
        }
    }
    return os;
}

std::ostream& operator<< (std::ostream& os, const StopsForBusResponse& r) {
    bool flag_end = true, flag_space = true;
    if (r.stops.empty()) {
        os << "No bus";
    } else {
        for (const std::string &stop : r.stops) {
            flag_space = true;
            if (!flag_end) {
                os << std::endl;
            }
            flag_end = false;
            os << "Stop " << stop << ": ";
            if (r.buses_for_stop.at(stop).buses.size() == 1) {
                os << "no interchange";
            } else {
                for (const std::string &bus : r.buses_for_stop.at(stop).buses) {
                    if (!flag_space) {
                        os << " ";
                    }
                    flag_space = false;
                    if (r.bus != bus) {
                        os << bus;
                    }
                }
            }
        }
    }
    return os;
}

std::ostream& operator<< (std::ostream& os, const AllBusesResponse& r) {
    bool flag_end = true, flag_space = true;
    if (r.buses.empty()) {
        os << "No buses";
    } else {
        for (const auto &bus_item : r.buses) {
            flag_space = true;
            if (!flag_end) {
                os << std::endl;
            }
            flag_end = false;
            os << "Bus " << bus_item.first << ": ";
            for (const std::string &stop : bus_item.second) {
                if (!flag_space) {
                    os << " ";
                }
                flag_space = false;
                os << stop;
            }
        }
    }
    return os;
}