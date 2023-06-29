#pragma once

#include "Animal.h"

namespace AnimalMonitor
{
    bool IsNull(const Animal* animal);

    void CheckHungerLevel(const Animal* animal);

    void CheckThirstLevel(const Animal* animal);

    void CheckFatgueLevel(const Animal* animal);

    void DisplayInfo(const Animal* animal);

    void Output(Animal* animal);
}