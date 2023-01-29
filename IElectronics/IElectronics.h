//
// IElectronics.h
// 2023-01-28
// Ivan Konishchev
//
// Interface electronics: All children must override the show Spec() method
//

#pragma once
#include <iostream>
#include <string>
class IElectronics
{
public:
    virtual void showSpec() = 0;
    virtual ~IElectronics() = default;
};