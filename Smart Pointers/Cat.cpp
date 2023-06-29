#include "Cat.h"

void Cat::Speak() const
{
    std::cout << "Meow.\n";
}

void Cat::AdditionalInfo() const
{
    std::cout << "Cats like " << GetName() << " have " << mLives << " lives!" << "\n";
}

void Cat::Move() const
{
    std::cout << "Cats like " << GetName() << " walk around on 4 paws and can run fast.\n";
}

void Cat::UniqueSound() const
{
    std::cout << GetName() << " is purring.\n";
}

void Cat::Fall() const
{
    std::cout << "When cats like " << GetName() << " fall, they always land feet first!\n";
}