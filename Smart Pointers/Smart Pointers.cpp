#include <iostream>
#include <memory>

#include "Animal.h"
#include "Cow.h"
#include "Dog.h"
#include "Cat.h"
#include "AnimalMonitor.h"

struct AnimalVars
{
    double weight;
    double thirst;
    double hunger;
    double fatigue;
};

struct CatVars : AnimalVars
{
    int lives;
};

int main()
{
    CatVars wiskersVars = { 5, 5, 7, 5, 9 };
    std::unique_ptr<Animal> wiskers{ std::make_unique<Cat>("Wiskers", "Male", "Cat", "He", wiskersVars.weight, wiskersVars.thirst, wiskersVars.hunger, wiskersVars.fatigue, Animal::EyeColor::Yellow, wiskersVars.lives ) };

    AnimalVars fidoVars = { 20, 3, 8, 8 };
    std::unique_ptr<Animal> fido{ std::make_unique<Dog>("Fido", "Female", "Dog", "She", fidoVars.weight, fidoVars.thirst, fidoVars.hunger, fidoVars.fatigue, Animal::EyeColor::Blue ) };

    AnimalVars bessieVars = { 900, 1, 6, 2 };
    std::unique_ptr<Animal> bessie{ std::make_unique<Cow>("Bessie", "Female", "Cow", "She", bessieVars.weight, bessieVars.thirst, bessieVars.hunger, bessieVars.fatigue, Animal::EyeColor::Brown ) };

    //The closer to 0 an animals stat is the better, the closer to 10, the worse.

    AnimalMonitor::Output(wiskers.get());
    AnimalMonitor::Output(fido.get());
    AnimalMonitor::Output(bessie.get());

    return 0;
}