#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include <vector>
#include "Ride.h"

class Driver {
private:
    int driverID;
    std::string name;
    double rating;
    std::vector<Ride*> assignedRides;   // Encapsulation: private

public:
    Driver(int id, const std::string& n, double r);
    ~Driver();

    void addRide(Ride* ride);           // Only way to add rides
    void getDriverInfo() const;
    double getTotalEarnings() const;
};

#endif
