#pragma once

#include <iostream>

#include "Animal.h"

class Cat : public Animal
{
    public:
        Cat
        (
            const std::string& name,
            const std::string& gender,
            const std::string type,
            const std::string& pronoun,
            double weight,
            double thirst,
            double hunger,
            double fatigue,
            int lives,
            EyeColor eyeColor
        )
            :
            Animal{ name, gender, type, pronoun, weight, thirst, hunger, fatigue, eyeColor }, mLives(lives)
        {}

        void Speak() const override;

        void AdditionalInfo() const override;

        void Move() const override;

        void UniqueSound() const override;

        void Fall() const override;

    private:
        int mLives{ 9 };
};