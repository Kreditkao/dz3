#include <iostream>
#include "Truck.h"

int main() {
    Car car("Toyota", "Red", 50, 7.5);
    car.printInfo();
    cout << "Maximum Distance: " << car.calculateDistance() << " km\n";
    cout << "Fuel Cost for Full Tank: " << car.calculateFuelCost(1.5) << " units\n"; // 1.5 - це ціна літра бензину
    cout << "----------------------\n";

    Truck truck("Volvo", "Blue", 150, 25, 20);
    truck.printInfo();
    cout << "Maximum Distance: " << truck.calculateDistance() << " km\n";
    cout << "Cost Per Ton Per Km: " << truck.calculateCostPerTonPerKm(1.5) << " units\n"; // 1.5 - це ціна літра бензину
    truck.addCargo("Furniture");
    truck.addCargo("Electronics");
    cout << "----------------------\n";
    

    return 0;
}
