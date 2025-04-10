#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    int base = Vehicle::getParkingDuration();
    return (int)(base * 0.9);  
}