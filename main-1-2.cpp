#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"


using namespace std;

int main() {
    ParkingLot lot(10);

       while (lot.getCount() < 10) {
        int choice, id;
        cout << "\n1. Car\n2. Bus\n3. Motorbike\nEnter the type of vehicle(1-3): ";
        cin >> choice;
               cout << "Enter the id of vehicle ";
        cin >> id;

        Vehicle* v = nullptr;
        switch (choice) {
            case 1: v = new Car(id); break;
            case 2: v = new Bus(id); break;
            case 3: v = new Motorbike(id); break;
            default: cout << "The type is invalid!\n"; continue;
        }

        lot.parkVehicle(v);
    }

    cout << "\nParking lot full!\n";
    int removeID;
    cout << "Please enter ID of vehicle to unpark:";
    cin >> removeID;
    lot.unparkVehicle(removeID);
    return 0;
}
