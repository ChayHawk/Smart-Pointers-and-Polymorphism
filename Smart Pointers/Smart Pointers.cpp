#include <iostream>
#include <memory>

#include "Animal.h"
#include "Cow.h"
#include "Dog.h"
#include "Cat.h"
#include "AnimalMonitor.h"

int main()
{
    std::unique_ptr<Animal> wiskers{ std::make_unique<Cat>("Wiskers", "Male", "Cat", "He", 5, 5, 7, 5, 9, Animal::EyeColor::Yellow ) };
    std::unique_ptr<Animal> fido{ std::make_unique<Dog>("Fido", "Female", "Dog", "She", 20, 3, 1, 8, Animal::EyeColor::Blue ) };
    std::unique_ptr<Animal> bessie{ std::make_unique<Cow>("Bessie", "Female", "Cow", "She", 900, 1, 6, 2, Animal::EyeColor::Brown ) };

    //The closer to 0 an animals stat is the better, the closer to 10, the worse.

    AnimalMonitor::Output(wiskers.get());
    AnimalMonitor::Output(fido.get());
    AnimalMonitor::Output(bessie.get());

    return 0;
}