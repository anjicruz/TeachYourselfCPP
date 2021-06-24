// LISTING 10.2 A Class with Accessor Methods
#include <iostream>

class Cat {
public:
    // public accessors
    unsigned int GetAge();
    void SetAge(unsigned int Age);

    unsigned int GetWeight();
    void SetWeight(unsigned int Weight);

    // public member function
    void Meow();
private:
    unsigned int itsAge;
    unsigned int itsWeight;
};
//int main()
//{
//    Cat Frisky;
//    Frisky.Age = 8;
//    return 0;
//}