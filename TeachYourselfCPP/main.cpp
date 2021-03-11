//	Demonstrating the switch Statement

#include <iostream>

int main() 
{//	using std::cout; using std::endl; using std::cin;
	using namespace std;
	unsigned short int number;
	cout << "Enter a number between 1 and 5: ";
	cin >> number;
	switch (number)
	{
	case 0: cout << "Too small, sorry!";
		break;
	case 5: cout << "Good Job!" << endl;
	case 4: cout << "Nice Pick!" << endl;
	case 3: cout << "Excellent!" << endl;
	case 2: cout << "Masterful!" << endl;
	case 1: cout << "Incredible!" << endl;
		break;
	default: cout << "Too large!" << endl;
		break;
	}
	cout << endl;
	return 0;
}/*
The switch Statement
The syntax for the switch statement is as follows :
switch (expression)
{
case valueOne: statement;
case valueTwo: statement;
	....
case valueN: statement;
default: statement;
}
The switch statement allows for branching on multiple values of expression.The
expression is evaluated, and if it matches any of the case values, execution jumps
to that line.Execution continues until either the end of the switch statement or a
break statement is encountered.
If expression does not match any of the case statements, and if there is a
default statement, execution switches to the default statement, otherwise the
switch statement ends.*/


