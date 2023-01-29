//
// BatteryVacuumCleaner.cpp
// 2023-01-29
// Ivan Konishchev
//

#include "BatteryVacuumCleaner.h"

BatteryVacuumCleaner::BatteryVacuumCleaner(std::string brand, std::string model, double battaryLife, double weight, std::string color) : _brand(brand),
                                                                                                                                         _model(model),
                                                                                                                                         BatteryAppliances(battaryLife, weight, color)
{
}
void BatteryVacuumCleaner::showSpec()
{
    std::cout << "Brand: " << _brand << std::endl
              << "Model: " << _model << std::endl
              << "Battery Life: " << _batteryLife << " hours\n"
              << "Weight: " << getWeight() << " kg\n"
              << "Color: " << getColor() << std::endl;
}