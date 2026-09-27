Object subclass: #Driver
    instanceVariableNames: 'driverID name rating assignedRides'
    classVariableNames: ''
    package: 'RideSharing'

Driver >> initializeWithID: anID name: aName rating: aRating
    driverID := anID.
    name := aName.
    rating := aRating.
    assignedRides := OrderedCollection new.   "Encapsulation"

Driver >> addRide: aRide
    assignedRides add: aRide.

Driver >> getDriverInfo
    Transcript show: '=== Driver Info ==='; cr.
    Transcript show: 'ID: ', driverID asString, ' | Name: ', name,
               ' | Rating: ', rating asString; cr.
    Transcript show: 'Completed Rides (', assignedRides size asString, '):'; cr.
    assignedRides do: [ :ride | ride rideDetails ].

Driver >> totalEarnings
    ^ assignedRides inject: 0 into: [ :sum :ride | sum + ride fare ]
