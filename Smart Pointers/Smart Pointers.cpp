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

    //wiskers.reset();

    //The closer to 0 an animals stat is the better, the closer to 10, the worse.

    AnimalMonitor::DisplayOutput(wiskers.get());
    wiskers->AdditionalInfo();
    wiskers->Fall();
    wiskers->Move();
    AnimalMonitor::CheckHungerLevel(wiskers.get());
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    wiskers->Eat();
    AnimalMonitor::CheckHungerLevel(wiskers.get());
    wiskers->Drink();
    wiskers->Sleep();
    wiskers->UniqueSound();

    std::cout << '\n';

    AnimalMonitor::DisplayOutput(fido.get());
    fido->AdditionalInfo();
    fido->Fall();
    fido->Move();
    fido->Eat();
    fido->Drink();
    fido->Sleep();
    fido->UniqueSound();

    std::cout << '\n';

    AnimalMonitor::DisplayOutput(bessie.get());
    bessie->AdditionalInfo();
    bessie->Fall();
    bessie->Move();
    bessie->Eat();
    bessie->Drink();
    bessie->Sleep();
    bessie->UniqueSound();

    return 0;
}