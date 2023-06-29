#include "Animal.h"

std::ostream& operator<<(std::ostream& os, Animal::EyeColor eyeColor)
{
    std::map<Animal::EyeColor, std::string> eyeColorMap =
    {
        {Animal::EyeColor::White, "White"},
        {Animal::EyeColor::Gray, "Gray"},
        {Animal::EyeColor::Yellow, "Yellow"},
        {Animal::EyeColor::Blue, "Blue"},
        {Animal::EyeColor::Brown, "Brown"}
    };

    os << eyeColorMap[eyeColor];

    return os;
}

//=======================================
//               PUBLIC
//=======================================

void Animal::Speak() const
{
    std::cout << "Default Speak\n";
}

void Animal::AdditionalInfo() const
{
    std::cout << "Default Info\n";
}

//The base classes implementation of eat, drink and sleep will work just fine since all implementations fucntion exactly the same
//So there is no reason to re write them all again.
void Animal::Eat()
{
    std::cout << GetName() << " ate some food and gained -" << DecrementHunger(1) << " hunger!\n";
}

void Animal::Drink()
{
    std::cout << GetName() << " drank some water and gained -" << DecrementThirst(1) << " thirst!\n";
}

void Animal::Sleep()
{
    std::cout << GetName() << " slept and gained -" << DecrementFatigue(1) << " fatigue!\n";
}

std::string Animal::GetName() const
{
    return mName;
}

std::string Animal::GetGender() const
{
    return mGender;
}

std::string Animal::GetSpecies() const
{
    return mSpecies;
}

std::string Animal::GetPronoun() const
{
    return mPronoun;
}

double Animal::GetWeight() const
{
    return mWeight;
}

double Animal::GetThirst() const
{
    return mThirst;
}

double Animal::GetHunger() const
{
    return mHunger;
}

double Animal::GetFatigue() const
{
    return mFatigue;
}

Animal::EyeColor Animal::GetEyeColor() const
{
    return mEyeColor;
}

//=======================================
//              PROTECTED
//=======================================

double Animal::DecrementHunger(double amount)
{
    mHunger -= amount;

    if (mHunger < 0)
    {
        std::cout << GetName() << " is not hungry.\n";
        mHunger = 0;
    }

    return mHunger;
}


double Animal::DecrementThirst(double amount)
{
    mThirst -= amount;

    if (mThirst < 0)
    {
        std::cout << GetName() << " is not hungry.\n";
        mThirst = 0;
    }

    return mThirst;
}

double Animal::DecrementFatigue(double amount)
{
    mFatigue -= amount;

    if (mHunger < 0)
    {
        std::cout << GetName() << " is not hungry.\n";
        mFatigue = 0;
    }

    return mFatigue;
}

double Animal::IncrementHunger(double amount)
{
    mHunger += amount;

    if (mHunger > mStatMaximum)
    {
        std::cout << GetName() << " is really hungry.\n";
        mHunger = mStatMaximum;
    }

    return mHunger;
}


double Animal::IncrementThirst(double amount)
{
    mThirst += amount;

    if (amount > mThirst)
    {
        std::cout << GetName() << " is really thirsty.\n";
        mThirst = mStatMaximum;
    }

    return mThirst;
}

double Animal::IncrementFatigue(double amount)
{
    mFatigue += amount;

    if (amount > mFatigue)
    {
        std::cout << GetName() << " is really tired.\n";
        mFatigue = mStatMaximum;
    }

    return mFatigue;
}