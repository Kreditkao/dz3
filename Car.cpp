#include "Car.h"

Car::Car() 
{

}

Car::Car(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption)
    : brand(brand), color(color), fuelTankVolume(fuelTankVolume), fuelConsumption(fuelConsumption) {}

string Car::getBrand() const 
{
    return brand;
}
string Car::getColor() const 
{
    return color; 
}
double Car::getFuelTankVolume() const 
{ 
    return fuelTankVolume; 
}
double Car::getFuelConsumption() const 
{ 
    return fuelConsumption; 
}

void Car::setBrand(const string& brand) 
{ 
    this->brand = brand; 
}
void Car::setColor(const string& color) 
{ 
    this->color = color; 
}
void Car::setFuelTankVolume(double fuelTankVolume) 
{ 
    this->fuelTankVolume = fuelTankVolume; 
}
void Car::setFuelConsumption(double fuelConsumption) 
{
    this->fuelConsumption = fuelConsumption; 
}

void Car::printInfo() const 
{
    cout << "Car Info:\n"
        << "Brand: " << brand << "\n"
        << "Color: " << color << "\n"
        << "Fuel Tank Volume: " << fuelTankVolume << " liters\n"
        << "Fuel Consumption: " << fuelConsumption << " liters per 100 km\n";
}

double Car::calculateDistance() const 
{
    return (fuelTankVolume / fuelConsumption) * 100;
}

double Car::calculateFuelCost(double fuelPrice) const 
{
    return (fuelTankVolume / fuelConsumption) * fuelPrice;
}
