#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"

class PremiumRide : public Ride {
private:
    static constexpr double RATE_PER_MILE = 3.00;
    static constexpr double BASE_FEE = 5.00;

public:
    PremiumRide(int id, const std::string& pickup, const std::string& dropoff, double dist);
    double fare() const override;
    void rideDetails() const override;
};

#endif
