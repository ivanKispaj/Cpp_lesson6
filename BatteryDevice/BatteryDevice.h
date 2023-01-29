//
// BatteryDevice.h
// 2023-01-28
// Ivan Konishchev
//

#pragma once
#include "../IElectronics/IElectronics.h"

class BatteryDevice : virtual public IElectronics
{
protected:
    double _batteryLife;

public:
    void showSpec() override;
    BatteryDevice() = default;
    BatteryDevice(double battaryLife);
    ~BatteryDevice() = default;
};