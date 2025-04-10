#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}
int Bus::getParkingDuration() {
    int base = Vehicle::getParkingDuration();
    return (int)(base * 0.75);
}