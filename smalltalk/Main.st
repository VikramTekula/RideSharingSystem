"===== Ride Sharing System Demo (Smalltalk) ====="

| ride1 ride2 ride3 ride4 allRides driver rider |

ride1 := StandardRide new initializeWithID: 101 pickup: 'Downtown' dropoff: 'Airport' distance: 12.5.
ride2 := PremiumRide new initializeWithID: 102 pickup: 'Mall' dropoff: 'University' distance: 8.0.
ride3 := StandardRide new initializeWithID: 103 pickup: 'Station' dropoff: 'Hospital' distance: 5.2.
ride4 := PremiumRide new initializeWithID: 104 pickup: 'Hotel' dropoff: 'Stadium' distance: 15.0.

allRides := OrderedCollection with: ride1 with: ride2 with: ride3 with: ride4.

Transcript show: '--- Polymorphic Fare Calculation & Details ---'; cr.
allRides do: [ :r |
    r rideDetails.
    Transcript show: '  Calculated Fare: $', r fare asString; cr; cr.
].

driver := Driver new initializeWithID: 1 name: 'Alice Johnson' rating: 4.85.
driver addRide: ride1.
driver addRide: ride2.
driver addRide: ride4.
driver getDriverInfo.
Transcript show: 'Total Earnings: $', driver totalEarnings asString; cr.

rider := Rider new initializeWithID: 501 name: 'Bob Smith'.
rider requestRide: ride1.
rider requestRide: ride3.
rider viewRides.
