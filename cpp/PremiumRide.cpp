#include "PremiumRide.h"

PremiumRide::PremiumRide(int id, const std::string& pickup, const std::string& dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double PremiumRide::fare() const {
    return BASE_FEE + (distance * RATE_PER_MILE);
}

void PremiumRide::rideDetails() const {
    Ride::rideDetails();
    std::cout << " | Type: Premium | Fare: $" << fare() << std::endl;
}
