// LISTING 9.2 Taking the Address of a Reference
#include <iostream>

int main()
{	
	using namespace std;
	int intOne;
	int &rSomeRef = intOne;

	intOne = 5;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl; // prints rSomeRef.rSomeRef is a reference to an integer.The reference is initialized to refer to int.

	cout << "&intOne: " << &intOne << endl;
	cout << "&rSomeRef: " << &rSomeRef << endl;
	return 0;
}/*
Output ▼
intOne : 5
rSomeRef : 5
& intOne : 0x3500
& rSomeRef : 0x3500
234 LESSON 9 : Exploiting References
Because the final two lines print memory addresses that might be
unique to your computer or to a specific run of the program, your
output might differ.
Analysis ▼
rSomeRef is again initialized as a reference to intOne.This time, the addresses of the two
variables are printed in lines 15 and 16, and they are identical.
C++ gives you no way to access the address of the reference itself because it is not
meaningful as it would be if you were using a pointer or other variable.References are
initialized when created, and they always act as a synonym for their target, even when
the address - of operator is applied.*/









