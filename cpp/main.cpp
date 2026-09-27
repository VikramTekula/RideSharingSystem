#include <iostream>
#include <vector>
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

int main() {
    std::cout << "===== Ride Sharing System Demo (C++) =====\n" << std::endl;

    // Create different types of rides
    StandardRide* ride1 = new StandardRide(101, "Downtown", "Airport", 12.5);
    PremiumRide*  ride2 = new PremiumRide(102, "Mall", "University", 8.0);
    StandardRide* ride3 = new StandardRide(103, "Station", "Hospital", 5.2);
    PremiumRide*  ride4 = new PremiumRide(104, "Hotel", "Stadium", 15.0);

    // Demonstrate Polymorphism
    std::vector<Ride*> allRides = {ride1, ride2, ride3, ride4};

    std::cout << "--- Polymorphic Fare Calculation & Details ---" << std::endl;
    for (Ride* r : allRides) {
        r->rideDetails();          // Calls the correct overridden version
        std::cout << "  Calculated Fare: $" << r->fare() << "\n" << std::endl;
    }

    // Driver
    Driver driver(1, "Alice Johnson", 4.85);
    driver.addRide(ride1);
    driver.addRide(ride2);
    driver.addRide(ride4);
    driver.getDriverInfo();
    std::cout << "Total Earnings: $" << driver.getTotalEarnings() << std::endl;

    // Rider
    Rider rider(501, "Bob Smith");
    rider.requestRide(ride1);
    rider.requestRide(ride3);
    rider.viewRides();

    // Clean up
    for (Ride* r : allRides) delete r;

    return 0;
}
