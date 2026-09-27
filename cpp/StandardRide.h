#ifndef STANDARD_RIDE_H
#define STANDARD_RIDE_H

#include "Ride.h"

class StandardRide : public Ride {
private:
    static constexpr double RATE_PER_MILE = 1.50;

public:
    StandardRide(int id, const std::string& pickup, const std::string& dropoff, double dist);
    double fare() const override;
    void rideDetails() const override;
};

#endif
