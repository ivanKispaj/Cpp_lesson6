//
// Appliances.h
// 2023-01-28
// Ivan Konishchev
//
//
//
//

#pragma once

#include "../IElectronics/IElectronics.h"

class Appliances : virtual public IElectronics
{
protected:
    double _weight{0};
    std::string _color;

public:
    Appliances() = default;
    Appliances(double weight, std::string color);
    ~Appliances() = default;
    void showSpec() override;
};