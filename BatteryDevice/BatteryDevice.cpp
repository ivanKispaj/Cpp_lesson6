//
// BatteryDevice.cpp
// 2023-01-28
// Ivan Konishchev
//

#include "BatteryDevice.h"

BatteryDevice::BatteryDevice(double battaryLife) : _batteryLife(battaryLife) {}

void BatteryDevice::showSpec()
{
    std::cout << "\n Battary device: \n"
              << "battary Life time: " << _batteryLife << " часа.\n";
}