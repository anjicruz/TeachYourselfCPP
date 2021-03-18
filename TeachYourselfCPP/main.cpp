//	Listing 9.1 - Demonstrating the use of references

#include <iostream>

int main()
{
	//using std::std::cout; using std::std::endl; using std::cin;
	int intOne;
	int& rSomeRef = intOne;

	intOne = 5;
	std::cout << "intOne:" << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;

	rSomeRef = 7;
	std::cout << "intOne:" << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;

	return 0;
}/*
Output ▼
intOne : 5
rSomeRef : 5
intOne : 7
rSomeRef : 7
Analysis ▼
On line 8, a local integer variable, intOne, is declared.On line 9, a reference to an integer
(int), rSomeRef, is declared and initialized to refer to intOne.As already stated, if
you declare a reference but don’t initialize it, you receive a compile - time error.
References must be initialized.
On line 11, intOne is assigned the value 5. On lines 12 and 13, the values in intOneand
rSomeRef are printed, and are, of course, the same.
On line 15, 7 is assigned to rSomeRef.Because this is a reference, it is an alias for
intOne, and thus the 7 is really assigned to intOne, as is shown by the printouts on lines
16 and 17.*/