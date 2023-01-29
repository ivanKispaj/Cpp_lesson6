//
// BatteryAppliances.cpp
// 2023-01-28
// Ivan Konishchev
//

#include "BatteryAppliances.h"

BatteryAppliances::BatteryAppliances(double battaryLife, double weight, std::string color) : BatteryDevice(battaryLife),
                                                                                             Appliances(weight, color)
{
}

void BatteryAppliances::showSpec()
{
    std::cout << "\nBattary Appliance: \n"
              << "Wieght: " << BatteryAppliances::_weight << "kg. ->"
              << " battary life:  " << BatteryAppliances::_batteryLife << std::endl;
}

std::string BatteryAppliances::getColor() const
{
    return _color;
}
double BatteryAppliances::getWeight() const
{
    return _weight;
}