#pragma once
#include <vector>
#include "Car.h"

class Truck : public Car {
private:
    double loadCapacity; // Вантажопідйомність (у тоннах)
    vector<string> cargoes; // Список вантажів

public:
    Truck();
    Truck(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption, double loadCapacity);
    ~Truck();

    double getLoadCapacity() const;
    void setLoadCapacity(double loadCapacity);

    void addCargo(const string& cargo);

    double calculateCostPerTonPerKm(double fuelPrice) const;
    void printInfo() const;
};
