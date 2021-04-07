//Listing 9.9 - Passing pointers to objects  Although passing a pointer to FunctionTwo() is more efficient, it is dangerous. FunctionTwo() is not meant to be allowed to change the SimpleCat object it is passed, yet it is given the address of the SimpleCat.This seriously exposes the original object to change and defeats the protection offered in passing by value. Passing by value is like giving a museum a photograph of your masterpiece instead of the real thing.If vandals mark it up, there is no harm done to the original.Passing by reference is like sending your home address to the museum and inviting guests to come overand look at the real thing.The solution is to pass a pointer to a constant SimpleCat. Doing so prevents calling any non - const method on SimpleCat, and thus protects the object from change. Passing a constant reference allows your “guests” to see the original “painting, ” but not to alter it in any way.

#include <iostream>

using namespace std;
class Simplecat
{
public:
	Simplecat(Simplecat&); // copy constructor
	Simplecat(); // constructor
	~Simplecat(); // destructor
	// SimpleCat has added two accessor functions, GetAge() on line 13, which is a const function, and SetAge() on line 14, which is not a const function.It has also added the member variable, itsAge, on line 17.
	int GetAge() const { return itsAge; }
	void setAge(int age) { itsAge = age; }
	// The constructor, copy constructor, and destructor are still defined to print their messages. The copy constructor is never called, however, because the object is passed by reference and so no copies are made.
private:
	int itsAge;
};

Simplecat::Simplecat()
{
	cout << "Simple Cat Constructor..." << endl;
	itsAge = 1; // Frisky is 1 years old
}

Simplecat::Simplecat(Simplecat&)
{
	cout << "Simple Cat Copy Constructor..." << endl;
}

Simplecat::~Simplecat()
{
	cout << "Simple Cat Destructor..." << endl;
}

const Simplecat * const FunctionTwo
(const Simplecat * const theCat);
// On line 42, an object is created, and its default age is printed, starting on line 43. On line 47, itsAge is set using the accessor SetAge, and the result is printed on line 48. FunctionOne is not used in this program, but FunctionTwo() is called.FunctionTwo() has changed slightly; the parameterand return value are now declared, on line 36, to take a constant pointer to a constant objectand to return a constant pointer to a constant object.
int main()
{
	cout << "Making a cat..." << endl;
	Simplecat Frisky;
	cout << "Frisky is ";
	cout << Frisky.GetAge();
	cout << " years old!" << endl;
	int age = 5;
	Frisky.setAge(age);
	cout << "Frisky is ";
	cout << Frisky.GetAge();
	cout << " years old!" << endl;
	cout << "Calling FunctionTwo..." << endl;
	FunctionTwo(&Frisky);
	cout << "Frisky is "; // Frisky is 5 years old!
	cout << Frisky.GetAge();
	cout << " years old!" << endl;
	return 0;
}

// functionTwo, passes a const pointer
const Simplecat* const FunctionTwo
	(const Simplecat* const theCat)
{
	cout << "Function Two. Returning..." << endl;
	cout << "Frisky is now " << theCat->GetAge();
	cout << " years old!" << endl;
	return theCat;
}/*
Output ▼
Making a cat...
Simple Cat constructor...
Frisky is 1 years old
Frisky is 5 years old
Calling FunctionTwo...
FunctionTwo.Returning...
Frisky is now 5 years old
Frisky is 5 years old
Simple Cat Destructor...*/

/* Because the parameter and return value are still passed by reference, no copies are made
and the copy constructor is not called.The object being pointed to in FunctionTwo(),
however, is now constant, and thus cannot call the non - const method, SetAge().If the
call to SetAge() on line 66 was not commented out, the program would not compile.

Note that the object created in main() is not constant, and Frisky can call SetAge().
The address of this nonconstant object is passed to FunctionTwo(), but because
FunctionTwo()’s declaration declares the pointer to be a constant pointer to a constant
object, the object is treated as if it were constant!*/

