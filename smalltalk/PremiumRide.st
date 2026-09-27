Ride subclass: #PremiumRide
    instanceVariableNames: ''
    classVariableNames: ''
    package: 'RideSharing'

PremiumRide class >> ratePerMile
    ^ 3.00

PremiumRide class >> baseFee
    ^ 5.00

PremiumRide >> fare
    ^ self class baseFee + (self distance * self class ratePerMile)

PremiumRide >> rideDetails
    super rideDetails.
    Transcript show: ' | Type: Premium | Fare: $', self fare asString; cr.
