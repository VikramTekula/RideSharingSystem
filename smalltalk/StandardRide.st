Ride subclass: #StandardRide
    instanceVariableNames: ''
    classVariableNames: ''
    package: 'RideSharing'

StandardRide class >> ratePerMile
    ^ 1.50

StandardRide >> fare
    ^ self distance * self class ratePerMile

StandardRide >> rideDetails
    super rideDetails.
    Transcript show: ' | Type: Standard | Fare: $', self fare asString; cr.
