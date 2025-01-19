#include "Truck.h"

Truck::Truck() : Car() 
{

}

Truck::Truck(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption, double loadCapacity)
    : Car(brand, color, fuelTankVolume, fuelConsumption), loadCapacity(loadCapacity) {}

Truck::~Truck() 
{

}

double Truck::getLoadCapacity() const
{
    return loadCapacity; 
}
void Truck::setLoadCapacity(double loadCapacity) 
{ 
    this->loadCapacity = loadCapacity; 
}

void Truck::addCargo(const string& cargo) 
{
    cargoes.push_back(cargo);
}

double Truck::calculateCostPerTonPerKm(double fuelPrice) const 
{
    return ((getFuelConsumption() / 100) * fuelPrice) / loadCapacity;
}

void Truck::printInfo() const 
{
    Car::printInfo();
    cout << "Load Capacity: " << loadCapacity << " tons\n";
    cout << "Cargoes: ";
    for (const auto& cargo : cargoes) {
        cout << cargo << ", ";
    }
    cout << "\n";
}
