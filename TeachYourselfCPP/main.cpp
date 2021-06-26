// LISTING 10.4 Using Constructors and Destructors
#include <iostream>

class Cat {
public:
    Cat(int initialAge); // constructor
    ~Cat(); // destructor
    int GetAge(); // accessor function
    void SetAge(int age); // accessor function
    void Meow();
private:
    int itsAge;
};

Cat::Cat(int initialAge) { itsAge = initialAge; } // constructor
Cat::~Cat () {} // destructor
int Cat::GetAge() {
    return itsAge;
}
void Cat::SetAge(int age) {
    itsAge = age;
}
void Cat::Meow() {
    std::cout << "Meow.\n";
}
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