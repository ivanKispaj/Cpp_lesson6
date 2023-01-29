//
// WashingMachine.h
// 2023-01-29
// Ivan Konishchev
//

#pragma once
#include "Appliances.h"

class WashingMachine final : public Appliances
{
    std::string _model;
    int _maxLoad{2};
    short int _energyClass{4};

public:
    void showSpec() override;
    std::string getEnergyClassString(short int energyClass);
    WashingMachine(std::string model, int maxLoad, short int energyClass, double weight, std::string color);
    ~WashingMachine() = default;
};