#pragma once

#include <iostream>

#include "Animal.h"

class Cow : public Animal
{
    public:
        using Animal::Animal;

        void Speak() const override;

        void AdditionalInfo() const override;

        void Move() const override;

        void Fall() const override;

        void UniqueSound() const override;
};