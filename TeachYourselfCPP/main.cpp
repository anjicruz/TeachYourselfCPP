// function overloading - A Demonstration of Function Polymorphism
#include <iostream>


int Double(int);
long Double(long);
float Double(float);
double Double(double);



int main() 
{	using std::cout; using std::endl; using std::cin;
	int myInt = 6500;
	long myLong = 65000;
	float myFloat = 6.5F;
	double myDouble = 6.5e20;

	int doubledInt;
	long doubledLong;
	float doubledFloat;
	double doubledDouble;

	cout << "myInt: " << myInt << endl;
	cout << "myLong: " << myLong << endl;
	cout << "myFloat: " << myFloat << endl;
	cout << "myDouble: " << myDouble << endl;

	doubledInt = Double(myInt);
	doubledLong = Double(myLong);
	doubledFloat = Double(myFloat);
	doubledDouble = Double(myDouble);

	cout << "doubledInt: " << doubledInt << endl;
	cout << "doubledLong: " << doubledLong << endl;
	cout << "doubledFloat: " << doubledFloat << endl;
	cout << "doubledDouble: " << doubledDouble << endl;

	return 0;
}

int Double(int original)
{
	std::cout << "In Double(int)\n";
	return 2 * original;
}

long Double(long original)
{
	std::cout << "In Double(long)\n";
	return 2 * original;
}

float Double(float original)
{
	std::cout << "In Double(float)\n";
	return 2 * original;
}

double Double(double original)
{
	std::cout << "In Double(double)\n";
	return 2 * original;
}
//Analysis ▼
//The Double() function is overloaded with int, long, float, and double.The prototypes
//are on lines 5–8, and the definitions are on lines 42–64.
//Note that in this example, the statement using namespace std; has been added on line
//10, outside of any particular function.This makes the statement global to this file, and
//thus the namespace is used in all the functions declared within this file.
//In the body of the main program, eight local variables are declared.On lines 14–17, four
//of the values are initialized, and on lines 29–32, the other four are assigned the results of
//passing the first four to the Double() function.When Double() is called, the calling
//function does not distinguish which one to call; it just passes in an argument, and the
//correct one is invoked.
//The compiler examines the arguments and chooses which of the four Double() functions
//to call.The output reveals that each of the four was called in turn, as you would expect.