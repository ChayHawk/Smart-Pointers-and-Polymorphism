#include <iostream>
#include <memory>

class Animal
{
    public:
        enum class EyeColor { White, Gray, Yellow, Blue, Brown };

        Animal
        (
            const std::string& name,
            const std::string& gender,
            const std::string type,
            const std::string& pronoun,
            double weight,
            double thirst,
            double hunger,
            double fatigue,
            EyeColor eyeColor
        )
            :
            mName(name),
            mGender(gender),
            mType(type),
            mPronoun(pronoun),
            mWeight(weight),
            mThirst(thirst),
            mHunger(hunger),
            mFatigue(fatigue),
            mEyeColor(eyeColor)
        {}

        virtual ~Animal() = default;

        virtual void Speak() const
        {
            std::cout << "Default Speak\n";
        }

        virtual void AdditionalInfo() const
        {
            std::cout << "Default Info\n";
        }

        virtual void Move() const
        {
            std::cout << "Generic animal Movement\n";
        }

        virtual void Fall() const
        {
            std::cout << "Animal falls normally.\n";
        }

        virtual void Eat() = 0;

        virtual void Drink() = 0;

        virtual void Sleep() = 0;

        virtual void UniqueSound() const = 0;

        std::string GetName() const
        {
            return mName;
        }

        std::string GetGender() const
        {
            return mGender;
        }

        std::string GetType() const
        {
            return mType;
        }

        std::string GetPronoun() const
        {
            return mPronoun;
        }

        double GetWeight() const
        {
            return mWeight;
        }

        double GetThirst() const
        {
            return mThirst;
        }

        double GetHunger() const
        {
            return mHunger;
        }

        double GetFatigue() const
        {
            return mFatigue;
        }

        EyeColor GetEyeColor() const
        {
            return mEyeColor;
        }

    protected:

        double SubtractHunger(int amount)
        {
            if (amount >= 0)
            {
                mHunger -= amount;
            }
            else
            {
                mHunger = 0;
            }

            return amount;
        }

        double SubtractThirst(int amount)
        {
            if (amount >= 0)
            {
                mThirst -= amount;
            }
            else
            {
                mThirst = 0;
            }

            return amount;
        }

        double SubtractFatigue(int amount)
        {
            if (amount >= 0)
            {
                mFatigue -= amount;
            }
            else
            {
                mFatigue = 0;
            }

            return amount;
        }

        double AddHunger(int amount)
        {
            if (amount < 10)
            {
                mHunger += amount;
            }
            else
            {
                mHunger = 10;
            }

            return amount;
        }

        double AddThirst(int amount)
        {
            if (amount < 10)
            {
                mThirst += amount;
            }
            else
            {
                mThirst = 10;
            }

            return amount;
        }

        double AddFatigue(int amount)
        {
            if (amount < 10)
            {
                mFatigue += amount;
            }
            else
            {
                mFatigue = 10;
            }

            return amount;
        }


    private:
        std::string mName{ "Animal Name" };
        std::string mGender{ "None" };
        std::string mType{ "Animal Type" };
        std::string mPronoun{ "Animal Pronoun" };
        double mWeight{ 0.0 };
        double mThirst{ 0 };
        double mHunger{ 0 };
        double mFatigue{ 0 };
        EyeColor mEyeColor{ EyeColor::Gray };
};

class Cow : public Animal
{
    public:
        using Animal::Animal;

        void Speak() const override
        {
            std::cout << "Moo.\n";
        }

        void AdditionalInfo() const override
        {
            std::cout << "Cows like " << GetName() << " like to graze for grass.\n";
        }

        void Move() const override
        {
            std::cout << "Cows like " << GetName() << " walk slowly on 4 hooves.\n";
        }

        void Eat() override
        {
            std::cout << GetName() << " ate some food and gained -" << SubtractHunger(1) << " hunger!\n";
        }

        void Drink() override
        {
            std::cout << GetName() << " drank some water and gained -" << SubtractThirst(1) << " thirst!\n";
        }

        void Sleep() override
        {
            std::cout << GetName() << " got some sleep and gained -" << SubtractFatigue(1) << " fatigue!\n";
        }

        void UniqueSound() const override
        {
            std::cout << GetName() << " is bellowing.\n";
        }
};

class Dog : public Animal
{
    public:
        using Animal::Animal;

        void Speak() const override
        {
            std::cout << "Bark.\n";
        }

        void AdditionalInfo() const override
        {
            std::cout << "Dogs like " << GetName() << " like to play fetch.\n";
        }

        void Move() const override
        {
            std::cout << "Dogs like " << GetName() << " walk around on 4 paws.\n";
        }

        void Eat() override
        {
            std::cout << GetName() << " ate some food and gained -" << SubtractHunger(1) << " hunger!\n";
        }

        void Drink() override
        {
            std::cout << GetName() << " drank some water and gained -" << SubtractThirst(1) << " thirst!\n";
        }

        void Sleep() override
        {
            std::cout << GetName() << " got some sleep and gained -" << SubtractFatigue(1) << " fatigue!\n";
        }

        void UniqueSound() const override
        {
            std::cout << GetName() << " is growling.\n";
        }
};

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
            Animal{name, gender, type, pronoun, weight, thirst, hunger, fatigue, eyeColor}, mLives(lives)
        {}

        void Speak() const override
        {
            std::cout << "Meow.\n";
        }

        void AdditionalInfo() const override
        {
            std::cout << "Cats like " << GetName() << " have " << mLives << " lives!" << "\n";
        }

        void Move() const override
        {
            std::cout << "Cats like " << GetName() << " walk around on 4 paws and can run fast.\n";
        }

        void Eat() override
        {
            std::cout << GetName() << " ate some food and gained -" << SubtractHunger(3) << " hunger!\n";
        }

        void Drink() override
        {
            std::cout << GetName() << " drank some water and gained -" << SubtractThirst(1) << " thirst!\n";
        }

        void Sleep() override
        {
            std::cout << GetName() << " got some sleep and gained -" << SubtractFatigue(1) << " fatigue!\n";
        }

        void UniqueSound() const override
        {
            std::cout << GetName() << " is purring.\n";
        }

        void Fall() const override
        {
            std::cout << "When cats like " << GetName() << " fall, they always land feet first!\n";
        }

    private:
        int mLives{ 9 };
};

std::ostream& operator<<(std::ostream& os, Animal::EyeColor eyeColor)
{
    switch (eyeColor)
    {
        case Animal::EyeColor::White: 
        {
            os << "White";
            break;
        }

        case Animal::EyeColor::Gray: 
        {
            os << "Gray";
            break;
        }

        case Animal::EyeColor::Yellow: 
        {
            os << "Yellow";
            break;
        }

        case Animal::EyeColor::Blue: 
        {
            os << "Blue";
            break;
        }

        case Animal::EyeColor::Brown:
        {
            os << "Brown";
            break;
        }

        default:
            std::cout << "Error\n";

    }
    return os;
}

bool IsNull(const Animal* animal)
{
    if (animal == nullptr)
    {
        std::cout << "Pointer has been reset to null!\n";
        return true;
    }
    else
    {
        std::cout << "Pointer is not null\n";
        return false;
    }
}

void CheckHungerLevel(const Animal* animal)
{
    if (animal->GetHunger() >= 6)
    {
        std::cout << animal->GetName() << "'s hunger level is " << animal->GetHunger() << ", ";
        std::cout << animal->GetName() << " is really hungry!\n";
    }
    else
    {
        std::cout << animal->GetName() << "'s hunger level is " << animal->GetHunger() << ", ";
        std::cout << animal->GetName() << " is not that hungry.\n";
    }
}

void CheckThirstLevel(const Animal* animal)
{
    if (animal->GetThirst() >= 6)
    {
        std::cout << animal->GetName() << "'s thirst level is " << animal->GetThirst() << ", ";
        std::cout << animal->GetName() << " is really thirsty!\n";
    }
    else
    {
        std::cout << animal->GetName() << "s thirst level is " << animal->GetThirst() << ", ";
        std::cout << animal->GetName() << " is not that thirsty.\n";
    }
}

void CheckFatgueLevel(const Animal* animal)
{
    if (animal->GetFatigue() >= 6)
    {
        std::cout << animal->GetName() << "'s fatigue level is " << animal->GetFatigue() << ", ";
        std::cout << animal->GetName() << " is really tired!\n";
    }
    else
    {
        std::cout << animal->GetName() << "'s fatigue level is " << animal->GetFatigue() << " ";
        std::cout << animal->GetName() << " is not that tired.\n";
    }
}

void DisplayOutput(const Animal* animal)
{
    if (IsNull(animal) == false)
    {
        std::cout << "This animal is a " << animal->GetGender() << " " << animal->GetType() << " named " << animal->GetName();
        std::cout << " and " << animal->GetPronoun() << " says ";
        animal->Speak();

        std::cout << animal->GetName() << " weighs " << animal->GetWeight() << " lbs and has " << animal->GetEyeColor() << " eyes.\n";
    }
    else
    {
        std::cout << "Error, pointer is null\n";
    }
}

int main()
{
    std::unique_ptr<Animal> wiskers{ std::make_unique<Cat>("Wiskers", "Male", "Cat", "He", 5, 5, 7, 5, 9, Animal::EyeColor::Yellow ) };
    std::unique_ptr<Animal> fido{ std::make_unique<Dog>("Fido", "Female", "Dog", "She", 20, 3, 1, 8, Animal::EyeColor::Blue ) };
    std::unique_ptr<Animal> bessie{ std::make_unique<Cow>("Bessie", "Female", "Cow", "She", 900, 1, 6, 2, Animal::EyeColor::Brown ) };

    //wiskers.reset();

    DisplayOutput(wiskers.get());
    wiskers->AdditionalInfo();
    wiskers->Fall();
    wiskers->Move();
    CheckHungerLevel(wiskers.get());
    wiskers->Eat();
    CheckHungerLevel(wiskers.get());
    wiskers->Drink();
    wiskers->Sleep();
    wiskers->UniqueSound();

    std::cout << '\n';

    IsNull(fido.get());
    fido->AdditionalInfo();
    fido->Fall();
    fido->Move();
    fido->Eat();
    fido->Drink();
    fido->Sleep();
    fido->UniqueSound();

    std::cout << '\n';

    IsNull(bessie.get());
    bessie->AdditionalInfo();
    bessie->Fall();
    bessie->Move();
    bessie->Eat();
    bessie->Drink();
    bessie->Sleep();
    bessie->UniqueSound();

    return 0;
}