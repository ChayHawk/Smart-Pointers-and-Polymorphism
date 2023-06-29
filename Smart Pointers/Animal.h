#pragma once

#include <iostream>
#include <string>
#include <map>

class Animal
{
    public:
        enum class EyeColor { White, Gray, Yellow, Blue, Brown };

        Animal
        (
            const std::string& name,
            const std::string& gender,
            const std::string species,
            const std::string& pronoun,
            double weight,
            double thirst,
            double hunger,
            double fatigue,
            EyeColor eyeColor
        ):
            mName(name),
            mGender(gender),
            mSpecies(species),
            mPronoun(pronoun),
            mWeight(weight),
            mThirst(thirst),
            mHunger(hunger),
            mFatigue(fatigue),
            mEyeColor(eyeColor)
        {}

        virtual ~Animal() = default;

        virtual void Speak() const;

        virtual void AdditionalInfo() const;

        virtual void Move() const = 0;

        virtual void Fall() const = 0;

        virtual void Eat();

        virtual void Drink();

        virtual void Sleep();

        virtual void UniqueSound() const = 0;


        std::string GetName() const;

        std::string GetGender() const;

        std::string GetSpecies() const;

        std::string GetPronoun() const;


        double GetWeight() const;

        double GetThirst() const;

        double GetHunger() const;

        double GetFatigue() const;

        EyeColor GetEyeColor() const;

    protected:

        double DecrementHunger(double amount);

        double DecrementThirst(double amount);

        double DecrementFatigue(double amount);


        double IncrementHunger(double amount);

        double IncrementThirst(double amount);

        double IncrementFatigue(double amount);

    private:
        std::string mName{ "Animal Name" };
        std::string mGender{ "None" };
        std::string mSpecies{ "Animal Species" };
        std::string mPronoun{ "Animal Pronoun" };

        double mWeight{ 0.0 };
        double mThirst{ 0 };
        double mHunger{ 0 };
        double mFatigue{ 0 };

        EyeColor mEyeColor{ EyeColor::Gray };

        //We can use a single variable for all stats here as all stats max out at 10.
        const int mStatMaximum{ 10 };
};

std::ostream& operator<<(std::ostream& os, Animal::EyeColor eyeColor);