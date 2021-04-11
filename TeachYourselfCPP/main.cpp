// LISTING 10.6 Cat Implementation in Cat.cpp
// Demonstrates inline functions and inclusion of header files be sure to include the header files! 
#include "Cat.h"
#include <iostream>
// Line 3 of Cat.cpp (Listing 10.6) shows #include “Cat.h”, which brings in the listings from Cat.h.By including Cat.h, you have told the precompiler to read Cat.h into the file as if it had been typed there, starting on line 6.
Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}

Cat::~Cat() {}
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
//This technique enables you to put your declarations into a different file from your implementation, yet have that declaration available when the compiler needs it.This is a very common technique in C++ programming.Typically, class declarations are in an.hpp file that is then #included into the associated.cpp file.
