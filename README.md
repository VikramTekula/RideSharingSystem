# Ride Sharing System

A class-based Ride Sharing System implemented in **C++** and **Smalltalk** to demonstrate core Object-Oriented Programming (OOP) principles: **Encapsulation**, **Inheritance**, and **Polymorphism**.

This project was developed as part of **Assignment 5**.

---

## Project Overview

The system models a simple ride-sharing service with the following components:

- **Ride** (base class) – stores ride ID, pickup location, drop-off location, and distance
- **StandardRide** & **PremiumRide** (subclasses) – override fare calculation
- **Driver** – maintains a private list of completed rides
- **Rider** – maintains a list of requested rides

Polymorphism is demonstrated by storing different ride types in a single collection and invoking `fare()` / `rideDetails()` on each element.

---

## Project Structure

```
RideSharingSystem/
├── cpp/
│   ├── Ride.h / Ride.cpp
│   ├── StandardRide.h / StandardRide.cpp
│   ├── PremiumRide.h / PremiumRide.cpp
│   ├── Driver.h / Driver.cpp
│   ├── Rider.h / Rider.cpp
│   ├── main.cpp
│   └── Makefile                (optional)
├── smalltalk/
│   ├── Ride.st
│   ├── StandardRide.st
│   ├── PremiumRide.st
│   ├── Driver.st
│   ├── Rider.st
│   └── Main.st
└── README.md
```

---

## Features

- Base `Ride` class with virtual/abstract `fare()` method
- Two specialized ride types with different pricing:
  - **StandardRide**: $1.50 per mile
  - **PremiumRide**: $5.00 base fee + $3.00 per mile
- Driver can be assigned multiple rides (encapsulation)
- Rider can request and view rides
- Polymorphic processing of mixed ride types

---

## How to Run

### C++ Version

**Requirements:** g++ with C++17 support

```bash
cd cpp
g++ -std=c++17 *.cpp -o rideshare
./rideshare
```

**Expected Output (excerpt):**

```
===== Ride Sharing System Demo (C++) =====
--- Polymorphic Fare Calculation & Details ---
Ride ID: 101 | From: Downtown → To: Airport | Distance: 12.5 miles | Type: Standard | Fare: $18.75
Ride ID: 102 | From: Mall → To: University | Distance: 8 miles | Type: Premium | Fare: $29
...
=== Driver Info ===
ID: 1 | Name: Alice Johnson | Rating: 4.85
Total Earnings: $97.75
```

---

### Smalltalk Version

#### Option 1: Pharo (Recommended)

1. Open **Pharo Launcher** and create/open an image.
2. Create a package named `RideSharing`.
3. Create the classes (`Ride`, `StandardRide`, `PremiumRide`, `Driver`, `Rider`) and paste the corresponding code from the `.st` files.
4. Open a **Playground**, paste the contents of `Main.st`, and execute it (**Do it**).
5. View the results in the **Transcript**.

#### Option 2: GNU Smalltalk (Command Line)

```bash
cd smalltalk
gst Ride.st StandardRide.st PremiumRide.st Driver.st Rider.st Main.st
```

---

## OOP Principles Demonstrated

| Principle         | How it is implemented                                                                 |
|-------------------|---------------------------------------------------------------------------------------|
| **Encapsulation** | `assignedRides` in `Driver` is private. Rides can only be added via `addRide()` / `addRide:`. |
| **Inheritance**   | `StandardRide` and `PremiumRide` inherit from `Ride` and reuse common attributes/methods. |
| **Polymorphism**  | A collection of `Ride` references holds different subclasses. Calling `fare()` or `rideDetails()` dispatches to the correct overridden version at runtime. |

---

## Sample Fare Calculations

| Ride Type   | Distance | Calculation                  | Fare    |
|-------------|----------|------------------------------|---------|
| Standard    | 12.5 mi  | 12.5 × $1.50                 | $18.75  |
| Premium     | 8.0 mi   | $5.00 + (8.0 × $3.00)        | $29.00  |
| Standard    | 5.2 mi   | 5.2 × $1.50                  | $7.80   |
| Premium     | 15.0 mi  | $5.00 + (15.0 × $3.00)       | $50.00  |

---
