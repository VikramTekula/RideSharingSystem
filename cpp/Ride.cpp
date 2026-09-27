#include "Ride.h"

Ride::Ride(int id, const std::string& pickup, const std::string& dropoff, double dist)
    : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {}

void Ride::rideDetails() const {
    std::cout << "Ride ID: " << rideID
              << " | From: " << pickupLocation
              << " → To: " << dropoffLocation
              << " | Distance: " << distance << " miles";
}
