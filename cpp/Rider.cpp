#include "Rider.h"
#include <iostream>

Rider::Rider(int id, const std::string& n) : riderID(id), name(n) {}

void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

void Rider::viewRides() const {
    std::cout << "\n=== Rider " << name << " (ID: " << riderID << ") Ride History ===" << std::endl;
    if (requestedRides.empty()) {
        std::cout << "No rides requested yet." << std::endl;
        return;
    }
    for (const auto* r : requestedRides) {
        r->rideDetails();
    }
}
