#ifndef RIDE_H
#define RIDE_H

#include <string>
#include <iostream>

class Ride {
protected:
    int rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance;   // in miles

public:
    Ride(int id, const std::string& pickup, const std::string& dropoff, double dist);
    virtual ~Ride() = default;

    // Pure virtual method → forces subclasses to implement their own fare calculation
    virtual double fare() const = 0;

    // Virtual method that can be overridden
    virtual void rideDetails() const;

    // Getters
    int getRideID() const { return rideID; }
    double getDistance() const { return distance; }
};

#endif
