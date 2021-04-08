// LISTING 10.1 Accessing the Public Members of a Simple Class
#include <iostream>
class Cat
{
public:
	int itsAge;    // member variable
	int itsWeight; // member variable
};
int main()
{
	Cat Frisky;
	Frisky.itsAge = 5; // assign to member variable
	Frisky.itsWeight = 5;
	std::cout << "Frisky is a cat who is " << Frisky.itsAge << " years old." << std::endl;
	std::cout << "Frisky is a cat who weighs " << Frisky.itsWeight << " pounds." << std::endl;

	return 0;
}

