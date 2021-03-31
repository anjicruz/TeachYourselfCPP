//LISTING 9.11 References as an Alternative

#include <iostream>

using namespace std;
class SimpleCat
{
	public:
		SimpleCat(); // constructor
		SimpleCat(SimpleCat&); // copy constructor
		~SimpleCat(); // destructor

		int GetAge() const { return itsAge; }
		void setAge(int age) { itsAge = age; }

	private:
		int itsAge;
};

SimpleCat::SimpleCat()
{
	cout << "Simple Cat constructor..." << endl;
	itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
	cout << "Simple Cat Copy constructor..." << endl;
}

SimpleCat::~SimpleCat()
{
	cout << "Simple Cat destructor..." << endl;
}

const SimpleCat & FunctionTwo(const SimpleCat & theCat);


int main()
{
	cout << "Making a cat..." << endl;
	SimpleCat Frisky;
	cout << "Frisky is " << Frisky.GetAge() << " years old" << endl ;
	int age = 5;
	Frisky.setAge(age);
	cout << "Frisky is " << Frisky.GetAge() << " years old" << endl;
	FunctionTwo(Frisky);
	cout << "Frisky is " << Frisky.GetAge() << " years old" << endl;
	return 0;
}

// FunctionTwo, passes a reference to a const object
const SimpleCat & FunctionTwo(const SimpleCat & theCat)

{
	cout << "Function Two. Returning..." << endl;
	cout << "Frisky is now " << theCat.GetAge();
	cout << " years old" << endl;
	// theCat->SetAge(8); const!
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
Simple Cat Destructor...

Analysis ▼
The output is identical to that produced by Listing 9.10.The only significant change is
that FunctionTwo() now takes and returns a reference to a constant object.Once again,
working with references is somewhat simpler than working with pointers, and the same
savingsand efficiency are achieved, as well as the safety provided by using const.

C++ programmers do not usually differentiate between “constant reference to a
SimpleCat object”and “reference to a constant SimpleCat object.” References
themselves can never be reassigned to refer to another object, and so they are
always constant.If the keyword const is applied to a reference, it is to make constant
the object referred to.*/

