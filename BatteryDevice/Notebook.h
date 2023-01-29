//
// Notebook.h
// 2023-01-29
// Ivan Konishchev
//

#pragma once
#include "BatteryDevice.h"

class Notebook final : public BatteryDevice
{
    std::string _model;
    int _hddSizeGB{250};
    int _memorySizeGB{2};
    bool _dvd{false};

public:
    void showSpec() override;
    Notebook(std::string model, int hddSizeGB, int memorySizeGB, bool dvd, double batteryLife);
    ~Notebook() = default;
};