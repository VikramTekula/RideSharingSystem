#include "Driver.h"
#include <iostream>

Driver::Driver(int id, const std::string& n, double r)
    : driverID(id), name(n), rating(r) {}

Driver::~Driver() {
    // Note: In a real system you would carefully manage ownership.
    // Here we assume rides are managed elsewhere or we simply clear.
    assignedRides.clear();
}

void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo() const {
    std::cout << "\n=== Driver Info ===" << std::endl;
    std::cout << "ID: " << driverID << " | Name: " << name
              << " | Rating: " << rating << std::endl;
    std::cout << "Completed Rides (" << assignedRides.size() << "):" << std::endl;
    for (const auto* r : assignedRides) {
        r->rideDetails();
    }
}

double Driver::getTotalEarnings() const {
    double total = 0.0;
    for (const auto* r : assignedRides) {
        total += r->fare();
    }
    return total;
}
