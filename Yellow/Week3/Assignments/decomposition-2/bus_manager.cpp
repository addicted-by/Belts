#include "bus_manager.h"

void BusManager::AddBus(const std::string& bus, const std::vector<std::string>& stops) {
    buses_to_stops[bus] = stops;
    for (const auto &i : stops)
        stops_to_buses[i].push_back(bus);

}
BusesForStopResponse BusManager::GetBusesForStop(const std::string& stop) const {
    if (stops_to_buses.count(stop) == 0) {
        return BusesForStopResponse{stop, std::vector<std::string>()};
    } else {
        return BusesForStopResponse{stop, stops_to_buses.at(stop)};
    }
}
StopsForBusResponse BusManager::GetStopsForBus(const std::string& bus) const {
    std::vector<std::string> stops;
    if (buses_to_stops.count(bus) > 0) {
        stops = buses_to_stops.at(bus);
    } else {
        stops = {};
    }
    std::map<std::string, BusesForStopResponse> buses;
    for (const std::string &stop : stops) {
        buses[stop] = GetBusesForStop(stop);
    }
    return StopsForBusResponse{bus, stops, buses};
}
AllBusesResponse BusManager::GetAllBuses() const {
    std::map<std::string, std::vector<std::string>> buses;
    if (!buses_to_stops.empty()) {
        buses = buses_to_stops;
    } else {
        buses = {};
    }
    return AllBusesResponse {buses};

}