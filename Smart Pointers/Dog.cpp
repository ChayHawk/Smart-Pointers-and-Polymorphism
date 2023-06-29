#include "Dog.h"

void Dog::Speak() const
{
    std::cout << "Bark.\n";
}

void Dog::AdditionalInfo() const
{
    std::cout << "Dogs like " << GetName() << " like to play fetch.\n";
}

void Dog::Move() const
{
    std::cout << "Dogs like " << GetName() << " walk around on 4 paws.\n";
}

void Dog::Fall() const
{
    std::cout << GetName() << " falls normally.\n";
}

void Dog::UniqueSound() const
{
    std::cout << GetName() << " is growling.\n";
}