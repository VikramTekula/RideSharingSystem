#ifndef RIDER_H
#define RIDER_H

#include <string>
#include <vector>
#include "Ride.h"

class Rider {
private:
    int riderID;
    std::string name;
    std::vector<Ride*> requestedRides;

public:
    Rider(int id, const std::string& n);
    void requestRide(Ride* ride);
    void viewRides() const;
};

#endif
