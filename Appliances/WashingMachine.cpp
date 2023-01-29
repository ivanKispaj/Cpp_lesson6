//
// WashingMachine.cpp
// 2023-01-29
// Ivan Konishchev
//

#include "WashingMachine.h"

WashingMachine::WashingMachine(std::string model, int maxLoad, short int energyClass, double weight, std::string color) : _model(model),
                                                                                                                          _maxLoad(maxLoad),
                                                                                                                          _energyClass(energyClass),
                                                                                                                          Appliances(weight, color)
{
}
void WashingMachine::showSpec()
{
    std::cout << "Washing machine: \n"
              << "Model: " << _model << std::endl
              << "Color: " << _color << std::endl
              << "Max load: " << _maxLoad << "kg\n"
              << "Energy class: " << WashingMachine::getEnergyClassString(_energyClass)
              << "Weight " << _weight << "kg\n\n";
}

std::string WashingMachine::getEnergyClassString(short int energyClass)
{
    switch (energyClass)
    {
    case 1:
        return "A+++\n";
    case 2:
        return "A++\n";
    case 3:
        return "A+\n";
    case 4:
        return "A\n";
    case 5:
        return "B\n";
    case 6:
        return "c\n";
    default:
        return "high energy consumption\n";
    }
}