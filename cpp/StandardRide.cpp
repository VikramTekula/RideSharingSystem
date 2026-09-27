#include "StandardRide.h"

StandardRide::StandardRide(int id, const std::string& pickup, const std::string& dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double StandardRide::fare() const {
    return distance * RATE_PER_MILE;
}

void StandardRide::rideDetails() const {
    Ride::rideDetails();
    std::cout << " | Type: Standard | Fare: $" << fare() << std::endl;
}
