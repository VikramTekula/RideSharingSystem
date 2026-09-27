Object subclass: #Ride
    instanceVariableNames: 'rideID pickupLocation dropoffLocation distance'
    classVariableNames: ''
    package: 'RideSharing'

Ride >> initializeWithID: anID pickup: pickup dropoff: dropoff distance: dist
    rideID := anID.
    pickupLocation := pickup.
    dropoffLocation := dropoff.
    distance := dist.

Ride >> fare
    "Abstract method – subclasses must override"
    self subclassResponsibility

Ride >> rideDetails
    Transcript show: 'Ride ID: ', rideID asString,
               ' | From: ', pickupLocation,
               ' → To: ', dropoffLocation,
               ' | Distance: ', distance asString, ' miles'.
