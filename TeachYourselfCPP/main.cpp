//Listing 9.9 - Passing pointers to objects

#include <iostream>

using namespace std;
class Simplecat
{
public:
	Simplecat(); // constructor
	Simplecat(Simplecat&); // copy constructor
	~Simplecat(); // destructor
};
// The very simplified SimpleCat class is declared on lines 6–12. The constructor, copy constructor, and destructor all print an informative message so that you can tell when they’ve been called.
Simplecat::Simplecat()
{
	cout << "Simple Cat Constructor..." << endl;
}

Simplecat::Simplecat(Simplecat&)
{
	cout << "Simple Cat Copy Constructor..." << endl;
}

Simplecat::~Simplecat()
{
	cout << "Simple Cat Destructor..." << endl;
}
// Listing 9.9 creates the SimpleCat object and then calls two functions. The first function receives the Cat by value and then returns it by value.The second one receives a pointer to the object, rather than the object itself, and returns a pointer to the object.
Simplecat FunctionOne(Simplecat theCat);
Simplecat* FunctionTwo(Simplecat *theCat);
// On line 34, main() prints out a message that is shown on the first line of the output. On line 35, a SimpleCat object is instantiated.This causes the constructor to be called, and the output from the constructor is seen on the second line of output. On line 36, main() reports that it is calling FunctionOne, which creates the third line of output.Because FunctionOne() is called passing the SimpleCat object by value, a copy of the SimpleCat object is made on the stack as an object local to the called function. This causes the copy constructor to be called, which creates the fourth line of output.
int main()
{
	cout << "Making a cat..." << endl;
	Simplecat Frisky;
	cout << "Calling FunctionOne..." << endl;
	FunctionOne(Frisky);
	cout << "Calling FunctionTwo..." << endl;
	FunctionTwo(&Frisky);
	return 0;
}
// Program execution jumps to line 46 in the called function, which prints an informative message, the fifth line of output.The function then returns, and returns the SimpleCat object by value.This creates yet another copy of the object, calling the copy constructor and producing the sixth line of output.
// FunctionOne, passes by value
Simplecat FunctionOne(Simplecat theCat)
{
	cout << "Function One. Returning..." << endl;
	return theCat;
}

// FunctionTwo, passes by reference
Simplecat* FunctionTwo(Simplecat* theCat)
{
	cout << "Function Two. Returning..." << endl;
	return theCat;
}/*
Output ▼
Making a cat...
Simple Cat Constructor...
Calling FunctionOne...
Simple Cat Copy Constructor...
Function One.Returning...
Simple Cat Copy Constructor...
Simple Cat Destructor... the seventh line of output
Simple Cat Destructor...
Calling FunctionTwo...
Function Two.Returning...
Simple Cat Destructor...

The return value from FunctionOne() is not assigned to any object, and so the temporary object created for the return is thrown away, calling the destructor, which produces the seventh line of output.Because FunctionOne() has ended, its local copy goes out of scope and is destroyed, calling the destructor and producing the eighth line of output. Program execution returns to main(), and FunctionTwo() is called, but the parameter is passed by reference.No copy is produced, so there’s no output.FunctionTwo() prints the message that appears as the tenth line of outputand then returns the SimpleCat object, again by reference, and so again produces no calls to the constructor or destructor. Finally, the program ends and Frisky goes out of scope, causing one final call to the destructor and printing the final line of output.The net effect of this is that the call to FunctionOne(), because it passed the Frisky by value, produced two calls to the copy constructorand two to the destructor, whereas the call to FunctionTwo() produced none.*/


