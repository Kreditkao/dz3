#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string color;
    double fuelTankVolume; // об'єм паливного бака (у літрах)
    double fuelConsumption; // норма споживання бензину (літрів на 100 км)

public:
    Car();
    Car(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption);

    string getBrand() const;
    string getColor() const;
    double getFuelTankVolume() const;
    double getFuelConsumption() const;

    void setBrand(const string& brand);
    void setColor(const string& color);
    void setFuelTankVolume(double fuelTankVolume);
    void setFuelConsumption(double fuelConsumption);

    void printInfo() const;
    double calculateDistance() const;
    double calculateFuelCost(double fuelPrice) const;
};

