#include "query.h"

std::istream& operator>> (std::istream& is, Query& q) {
    size_t stop_count;
    std::string command, bus, stop;
    is >> command;
    if (command == "NEW_BUS") {
        is >> bus >> stop_count;
        std::vector<std::string> stops(stop_count);
        for (std::string &stop_name : stops) {
            is >> stop_name;
        }
        q.type = QueryType::NewBus;
        q.bus = bus;
        q.stops = stops;
    } else if (command == "BUSES_FOR_STOP") {
        is >> stop;
        q.type = QueryType::BusesForStop;
        q.stop = stop;
    } else if (command == "STOPS_FOR_BUS") {
        is >> bus;
        q.type = QueryType::StopsForBus;
        q.bus = bus;
    } else if (command == "ALL_BUSES") {
        q.type = QueryType::AllBuses;
    }
    return is;
}