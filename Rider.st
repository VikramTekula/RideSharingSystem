Object subclass: #Rider
    instanceVariableNames: 'riderID name requestedRides'
    classVariableNames: ''
    package: 'RideSharing'

Rider >> initializeWithID: anID name: aName
    riderID := anID.
    name := aName.
    requestedRides := OrderedCollection new.

Rider >> requestRide: aRide
    requestedRides add: aRide.

Rider >> viewRides
    Transcript show: '=== Rider ', name, ' (ID: ', riderID asString, ') Ride History ==='; cr.
    requestedRides isEmpty
        ifTrue: [ Transcript show: 'No rides requested yet.'; cr ]
        ifFalse: [ requestedRides do: [ :ride | ride rideDetails ] ].
