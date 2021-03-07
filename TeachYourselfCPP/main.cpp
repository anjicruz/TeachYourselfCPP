// A Demonstration of an Inline Function
#include <iostream>

inline int Double(int);

int main() 
{	using std::cout; using std::endl; using std::cin;
	


	int target;

	cout << "Enter a number to work with: ";
	cin >> target;
	cout << endl;

	target = Double(target);
	cout << "Target: " << target << endl;

	target = Double(target);
	cout << "Target: " << target << endl;

	target = Double(target);
	cout << "Target: " << target << endl;
	return 0;
}

int Double(int target)
{
	return 2 * target;
}
//Analysis ▼
//On line 4, Double() is declared to be an inline function taking an int parameter and
//returning an int.The declaration is just like any other prototype except that the keyword inline is prepended just before the return value.This compiles into code that is the same as if you had written				target = 2 target; everywhere you entered target = Double(target); By the time your program executes, the instructions are already in place, compiled into
//the.obj file.This saves a jump and return in the execution of the code at the cost of a larger program.
//
//The inline keyword is a hint to the compiler that you want the
//function to be inlined.The compiler is free to ignore the hint and
//make a real function call.