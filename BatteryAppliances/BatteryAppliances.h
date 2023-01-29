//
// BatteryAppliances.h
// 2023-01-28
// Ivan Konishchev
//

#pragma once
#include "../BatteryDevice/BatteryDevice.h"
#include "../Appliances/Appliances.h"

class BatteryAppliances : public BatteryDevice, Appliances
{
public:
    BatteryAppliances(double battaryLife, double weight, std::string color);
    ~BatteryAppliances() = default;
    std::string getColor() const;
    double getWeight() const;
    void showSpec() override;
};