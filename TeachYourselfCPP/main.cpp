//Listing 9.11 - Passing references to objects
// Because you know the object will never be null, it would be easier to work within the function if a reference were passed in, rather than a pointer.Listing 9.11 illustrates this approach.
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

const Simplecat & FunctionTwo (const Simplecat & theCat);

int main()
{
	cout << "Making a cat..." << endl;
	Simplecat Frisky;
	cout << "Frisky is " << Frisky.GetAge() << " years old!" << endl;
	int age = 5;
	Frisky.setAge(age);
	cout << "Frisky is " << Frisky.GetAge() << " years old!" << endl;
	cout << "Calling FunctionTwo..." << endl;
	FunctionTwo(Frisky);
	cout << "Frisky is " << Frisky.GetAge() << " years old!" << endl;
	return 0;
}

// functionTwo, passes a ref to a const pointer
const Simplecat & FunctionTwo(const Simplecat & theCat)
{
	cout << "Function Two. Returning..." << endl;
	cout << "Frisky is now " << theCat.GetAge();
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
//
//Analysis ▼
//The output is identical to that produced by Listing 9.10.The only significant change is
//that FunctionTwo() now takes and returns a reference to a constant object.Once again,
//working with references is somewhat simpler than working with pointers, and the same
//savings and efficiency are achieved, as well as the safety provided by using const.
//
//C++ programmers do not usually differentiate between “constant reference to a
//SimpleCat object”and “reference to a constant SimpleCat object.” References
//themselves can never be reassigned to refer to another object, and so they are
//always constant.If the keyword const is applied to a reference, it is to make constant
//the object referred to.

