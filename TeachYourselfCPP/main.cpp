//Listing 9.10 - Passing pointers to objects

#include <iostream>

using namespace std;
class SimpleCat
{
public:
	SimpleCat();			// constructor
	SimpleCat(SimpleCat&);  // copy constructor
	~SimpleCat();			// destructor

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }

private:
	int itsAge;
};

SimpleCat::SimpleCat()
{
	cout << "Simple Cat Constructor..." << endl;
	itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
	cout << "Simple Cat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat()
{
	cout << "Simple Cat Destructor..." << endl;
}

const SimpleCat* const FunctionTwo
(const SimpleCat* const theCat);

int main()
{	//using std::cout; using std::endl; using std::cin;
	cout << "Making a cat..." << endl;
	SimpleCat Frisky;
	cout << "Frisky is ";
	cout << Frisky.GetAge();
	cout << " years old" << endl;
	int age = 5;
	Frisky.SetAge(age);
	cout << "Frisky is ";
	cout << Frisky.GetAge();
	cout << " years old" << endl;
	cout << "Calling FunctionTwo..." << endl;
	FunctionTwo(&Frisky);
	cout << "Frisky is ";
	cout << Frisky.GetAge();
	cout << " years old" << endl;
	return 0;
}

// FunctionTwo, passes a const pointer
const SimpleCat* const FunctionTwo
(const SimpleCat* const theCat)
{
	cout << "Function Two. Returning..." << endl;
	cout << "Frisky is now " << theCat->GetAge();
	cout << " years old " << endl;
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
SimpleCat has added two accessor functions, GetAge() on line 13, which is a const
function, and SetAge() on line 14, which is not a const function.It has also added the
member variable, itsAge, on line 17.
The constructor, copy constructor, and destructor are still defined to print their messages.
The copy constructor is never called, however, because the object is passed by reference
and so no copies are made.On line 42, an object is created, and its default age is printed,
starting on line 43.
On line 47, itsAge is set using the accessor SetAge, and the result is printed on line 48.
FunctionOne is not used in this program, but FunctionTwo() is called.FunctionTwo()
has changed slightly; the parameterand return value are now declared, on line 36, to take
a constant pointer to a constant objectand to return a constant pointer to a constant
object.
Because the parameter and return value are still passed by reference, no copies are made
and the copy constructor is not called.The object being pointed to in FunctionTwo(),
however, is now constant, and thus cannot call the non - const method, SetAge().If the
call to SetAge() on line 66 was not commented out, the program would not compile.
Passing by Reference for Efficiency 251
9
LISTING 9.10 Continued
Note that the object created in main() is not constant, and Frisky can call SetAge().
The address of this nonconstant object is passed to FunctionTwo(), but because
FunctionTwo()’s declaration declares the pointer to be a constant pointer to a constant
object, the object is treated as if it were constant!*/







