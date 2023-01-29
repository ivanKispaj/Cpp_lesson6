//
// BatteryVacuumCleaner.h
// 2023-01-29
// Ivan Konishchev
//

#pragma once
#include "BatteryAppliances.h"

class BatteryVacuumCleaner final : public BatteryAppliances
{
    std::string _brand;
    std::string _model;

public:
    void showSpec() override;
    BatteryVacuumCleaner(std::string brand, std::string model, double battaryLife, double weight, std::string color);
    ~BatteryVacuumCleaner() = default;
};