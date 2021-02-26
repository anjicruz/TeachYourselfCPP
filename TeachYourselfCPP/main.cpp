// A Demonstration of Prefix and Postfix Operators
#include <iostream>

int main() 
{
	using std::cout;
	using std::endl;

	int myAge = 39;
	int yourAge = 39;
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	myAge++; //postfix increment
	++yourAge; // prefix increment
	cout << "One year passes...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	cout << "Another year passes...\n";
	cout << "I am: " << myAge++ << " years old.\n";
	cout << "I am: " << ++yourAge << " years old.\n";
	cout << "Let's print it again...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	return 0;
	/*
		DO use the prefix operator (++variable)
		to increment or decrement the
		variable before it is used in the expression.
		DO use the postfix operator (variable++)
		to increment or decrement the
		variable after it is used.*/
		
}
