// LISTING 10.5 Cat Class Declaration in Cat.h
#pragma once
#include <iostream>
// GetAge() is declared on line 7 of Cat.h, and its inline implementation is provided. Lines 8 and 9 provide more inline functions, but the functionality of these functions is unchanged from the previous “outline” implementations.
class  Cat
{
public:
	Cat(int initialAge);
	~Cat();
	int GetAge() const { return itsAge; } // inline!
	void SetAge(int age) { itsAge = age; } // inline!
	void Meow() const { std::cout << "Meow.\n"; } // inline!
private:
	int itsAge;
};
