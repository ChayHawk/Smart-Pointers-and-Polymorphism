#include "AnimalMonitor.h"

bool AnimalMonitor::IsNull(const Animal* animal)
{
    if (animal == nullptr)
    {
        std::cout << "Pointer has been reset to null!\n";
        return true;
    }
    else
    {
        std::cout << "Pointer is not null\n";
        return false;
    }
}

void AnimalMonitor::CheckHungerLevel(const Animal* animal)
{
    if (animal->GetHunger() >= 6)
    {
        std::cout << animal->GetName() << "'s hunger level is " << animal->GetHunger() << ", ";
        std::cout << animal->GetName() << " is really hungry!\n";
    }
    else
    {
        std::cout << animal->GetName() << "'s hunger level is " << animal->GetHunger() << ", ";
        std::cout << animal->GetName() << " is not that hungry.\n";
    }
}

void AnimalMonitor::CheckThirstLevel(const Animal* animal)
{
    if (animal->GetThirst() >= 6)
    {
        std::cout << animal->GetName() << "'s thirst level is " << animal->GetThirst() << ", ";
        std::cout << animal->GetName() << " is really thirsty!\n";
    }
    else
    {
        std::cout << animal->GetName() << "s thirst level is " << animal->GetThirst() << ", ";
        std::cout << animal->GetName() << " is not that thirsty.\n";
    }
}

void AnimalMonitor::CheckFatgueLevel(const Animal* animal)
{
    if (animal->GetFatigue() >= 6)
    {
        std::cout << animal->GetName() << "'s fatigue level is " << animal->GetFatigue() << ", ";
        std::cout << animal->GetName() << " is really tired!\n";
    }
    else
    {
        std::cout << animal->GetName() << "'s fatigue level is " << animal->GetFatigue() << " ";
        std::cout << animal->GetName() << " is not that tired.\n";
    }
}

void AnimalMonitor::DisplayOutput(const Animal* animal)
{
    if (IsNull(animal) == false)
    {
        std::cout << "Basic Info About " << animal->GetName() << "\n\n";

        std::cout << "Name: " << animal->GetName() << '\n';
        std::cout << "Species: " << animal->GetSpecies() << '\n';
        std::cout << "Gender: " << animal->GetGender() << '\n';
        std::cout << "Weight: " << animal->GetWeight() << " lbs\n";
        std::cout << "Eye Color: " << animal->GetEyeColor() << "\n\n";
    }
    else
    {
        std::cout << "Error, pointer is null\n";
    }
}