#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Vehicle.h"

#include "Motorbike.h"
using namespace std;
int main() {
    int n;
        
    cin >> n;

    vector<Vehicle*> vehicles;

    for (int i = 0; i < n; i++) {
        int choice;
        int id;
        cout << "\n1. Car\n2. Bus\n3. Motorbike\nEnter vehicle type (1-3): ";
        cin >> choice;
        cout << "Enter thr vehicle ID: ";
        cin >> id;

                  switch (choice) {
            case 1: vehicles.push_back(new Car(id)); break;
               case 2: vehicles.push_back(new Bus(id)); break;
            case 3: vehicles.push_back(new Motorbike(id)); break;
            default: cout << "The choice is invalid!\n"; break;
        }
    }

   
          for (auto* auto_mobile : vehicles) {
        cout << "ID of vehicle " << auto_mobile->getID()
                  << ", Adjusted Duration: " << auto_mobile->getParkingDuration()
                  << " seconds." << endl;
        delete auto_mobile; 
    }

    return 0;
}
