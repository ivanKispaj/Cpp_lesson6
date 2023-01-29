//
// main.cpp
// 2023-01-28
// Ivan Konishchev
//

#include <iostream>
#include "BatteryAppliances/BatteryVacuumCleaner.h"
#include "BatteryDevice/Notebook.h"
#include "Appliances/WashingMachine.h"

void getSkladText(); // function declaration
int main(int argc, const char *argv[])
{
    // Show or not sklad list
    bool isShowSkladList{true};
    // Sklad size
    int skladSize{5};
    IElectronics *electronicsSklad[skladSize];
    electronicsSklad[0] = new Notebook("HP", 1000, 8, true, 5);
    electronicsSklad[1] = new Notebook("Samsung", 500, 16, false, 8);
    electronicsSklad[2] = new WashingMachine("Samsung", 6, 1, 56.5, "white");
    electronicsSklad[3] = new WashingMachine("Whirlpool", 6, 4, 58.7, "white");
    electronicsSklad[4] = new BatteryVacuumCleaner("Dayson", "PW-213", 6, 3.8, "Red"); //(std::string brand, std::string model, double battaryLife, double weight, std::string color)

    while (true)
    {
        if (isShowSkladList)
        {
            getSkladText();
            isShowSkladList = false;
        }
        int chose;
        std::cout << "Input number of product: ";
        std::cin >> chose;
        if (std::cin.good())
        {
            if (chose > 0 && chose <= 5)
            {
                electronicsSklad[chose - 1]->showSpec();
            }
            else if (chose == 0)
            {
                break; // exit from programm
            }
        }
        else
        {
            // Input error: Show sklad list
            isShowSkladList = true;
        }
    }

    for (int i = 0; i < skladSize; i++)
    {
        // electronicsSklad[i]->showSpec();
        delete electronicsSklad[i];
    }
    return 0;
}

// function definition
void getSkladText()
{
    std::cout << "Выберите продукт :\n"
              << "1 - NoteBook HP\n"
              << "2 - NoteBook Samsung\n"
              << "3 - WashingMachine Samsung\n"
              << "4 - WashingMachine Whirlpool\n"
              << "5 - Battary Vacuum Cleaner Dayson\n"
              << "0 чтобы выйти" << std::endl;

    std::cin.clear();
    fflush(stdin);
}