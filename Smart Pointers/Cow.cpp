#include "Cow.h"

void Cow::Speak() const
{
    std::cout << "Moo.\n";
}

void Cow::AdditionalInfo() const
{
    std::cout << "Cows like " << GetName() << " like to graze for grass.\n";
}

void Cow::Move() const
{
    std::cout << "Cows like " << GetName() << " walk slowly on 4 hooves.\n";
}

void Cow::Fall() const
{
    std::cout << GetName() << " falls normally.\n";
}

void Cow::UniqueSound() const
{
    std::cout << GetName() << " is bellowing.\n";
}