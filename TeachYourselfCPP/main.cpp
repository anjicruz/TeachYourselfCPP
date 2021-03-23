// LISTING 8.2 Manipulating Data by Using Pointers
#include <iostream>

typedef unsigned short int USHORT;

int main()
{

	using namespace std;
	
	USHORT myAge; // a variable
	USHORT* pAge; // a pointer

	myAge = 5;
	cout << "myAge: " << myAge << endl;
	pAge = &myAge; // assign address of myAge to pAge
	cout << "*pAge: " << *pAge << endl << endl;  // prints the pointer that holds the value stored at myAge
	return 0;
}/*
Line 17: The indirection operator (*) in front of the pointer variable pAge means “the value
stored at.” This assignment says, “Take the value stored at the address in pAge and
assign it to myAge.”*/
//
//This program declares two variables : an unsigned short, myAge, and a pointer to an
//unsigned short, pAge.myAge is assigned the value 5 on line 14; this is verified by the
//printout on line 16.
//On line 17, pAge is assigned the address of myAge.On line 18, pAge is dereferenced—
//using the indirection operator (*)—and printed, showing that the value at the address that
//pAge stores is the 5 stored in myAge.









