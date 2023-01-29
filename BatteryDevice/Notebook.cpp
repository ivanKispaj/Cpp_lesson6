//
// Notebook.cpp
// 2023-01-29
// Ivan Konishchev
//

#include "Notebook.h"

Notebook::Notebook(std::string model, int hddSizeGB, int memorySizeGB, bool dvd, double batteryLife) : _model(model),
                                                                                                       _hddSizeGB(hddSizeGB),
                                                                                                       _memorySizeGB(memorySizeGB),
                                                                                                       _dvd(dvd), BatteryDevice(batteryLife)
{
}

void Notebook::showSpec()
{
    std::cout << "Notebook: \n"
              << "Model: " << _model << std::endl
              << "Hdd size: " << _hddSizeGB << " Gb\n"
              << "Memory size: " << _memorySizeGB << " Gb\n"
              << "DVD: " << (_dvd == true ? "Yes" : "No") << std::endl
              << "Battary life: " << _batteryLife << " hours\n\n";
}