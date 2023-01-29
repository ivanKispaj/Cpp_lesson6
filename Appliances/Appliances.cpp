//
// Appliances.cpp
// 2023-01-28
// Ivan Konishchev
//

#include "Appliances.h"

Appliances::Appliances(double weight, std::string color) : _weight(weight), _color(color) {}

void Appliances::showSpec()
{
    std::cout << "\nAppliance: \n"
              << "Weight: " << _weight << " kg.\n"
              << "Color: " << _color << std::endl;
}