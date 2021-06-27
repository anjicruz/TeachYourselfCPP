#include "Cat.h"

Cat::Cat(int initialAge) { itsAge = initialAge; } // constructor
Cat::~Cat () {} // destructor

int main()
{
    Cat Frisky(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is " << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Frisky.SetAge(7);
    std::cout << "Now Frisky is " << Frisky.GetAge() << " years old.\n";
    return 0;
}