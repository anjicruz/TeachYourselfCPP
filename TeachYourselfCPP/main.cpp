// LISTING 10.1 Accessing the Public Members of a Simple Class
#include <iostream>

class Cat {
public:
    int itsAge;
    int itsWeight;
};
int main()
{
    Cat Frisky;
    Frisky.itsAge = 5;
    std::cout << "Frisky is " << Frisky.itsAge << " years old" << std::endl;
    return 0;
}