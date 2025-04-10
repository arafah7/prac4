#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    ParkingLot lot(10);
    int parked = 0;
    while (parked < 10) {
        int choice, id;
        cout << "1. Car\n2. Bus\n3. Motorbike\nEnter the type of vehicle (1-3): ";
        cin >> choice;
        cout << "Enter the ID of vehicle ";
        cin >> id;

        Vehicle* v = nullptr;

        if (choice == 1)
            v = new Car(id);
        else if (choice == 2)
            v = new Bus(id);
            
        else if (choice == 3)
            v = new Motorbike(id);
        else {
            cout << "The choice is invalid\n";
            continue;
        }

        if (lot.parkVehicle(v))
            parked++;
    }

    int maxDuration = 15;
    int overstaying = lot.countOverstayingVehicles(maxDuration);
    cout << "The Number of overstaying vehicles (>" << maxDuration << " seconds): " << overstaying << endl;

    return 0;
}