//	LISTING 8.2 Manipulating Data by Using Pointers
#include <iostream>

typedef unsigned short int USHORT;

int main()
{	//using std::cout; using std::endl; using std::cin;

	using namespace std;

	USHORT myAge;
	USHORT * pAge = 0;

	myAge = 5;

	cout << "myAge: " << myAge << endl;
	pAge = &myAge; // assign address of myAge to pAge
	cout << "*pAge: " << *pAge << endl << endl;

	cout << "Setting *pAge = 7" << endl;
	*pAge = 7; // sets myAge to 7

	cout << "*pAge: " << *pAge << endl;
	cout << "myAge: " << myAge << endl << endl;

	cout << "Setting myAge = 9..." << endl;
	myAge = 9;

	cout << "myAge: " << myAge << endl;
	cout << "*pAge: " << *pAge << endl;

	return 0;
}/*
Output ▼
myAge : 5
	* pAge : 5
	Setting *pAge = 7...
	*pAge : 7
	myAge : 7
	Setting myAge = 9...
	myAge : 9
	* pAge : 9
	Analysis ▼
	This program declares two variables : an unsigned short, myAge, and a pointer to an
	unsigned short, pAge.myAge is assigned the value 5 on line 14; this is verified by the
	printout on line 16.
	On line 17, pAge is assigned the address of myAge.On line 18, pAge is dereferenced—
	using the indirection operator (*)—and printed, showing that the value at the address that
	pAge stores is the 5 stored in myAge.
	On line 21, the value 7 is assigned to the variable at the address stored in pAge.This sets
	myAge to 7, and the printouts on lines 23 and 24 confirm this.Again, you should notice
	that the indirect access to the variable was obtained by using an asterisk—the indirection
	operator in this context.
	On line 27, the value 9 is assigned to the variable myAge.This value is obtained directly
	on line 29 and indirectly(by dereferencing pAge) on line 30.*/
