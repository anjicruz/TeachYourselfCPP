// Listing 9.3 - Reassigning a reference
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

	int intTwo = 8;
	rSomeRef - intTwo;
	cout << "\nintOne: " << intOne << endl;
	cout << "intTwo: " << intTwo << endl;
	cout << "rSomeRef: " << rSomeRef << endl; 
	cout << "&intOne: " << &intOne << endl;
	cout << "&intTwo: " << &intTwo << endl;
	cout << "&rSomeRef: " << &rSomeRef << endl;


	return 0;
}/*
Analysis ▼
On lines 8 and 9, an integer variableand a reference to an integer are declared.The integer
is assigned the value 5 on line 11, and the valuesand their addresses are printed on
lines 12–15.
On line 17, a new variable, intTwo, is createdand initialized with the value 8. On line
18, the programmer tries to reassign rSomeRef to be an alias to the variable intTwo, but
that is not what happens.What actually happens is that rSomeRef continues to act as an
alias for intOne, so this assignment is equivalent to the following :
intOne = intTwo;
Sure enough, when the values of intOneand rSomeRef are printed(lines 19–21), they are
the same as intOne.In fact, when the addresses are printed on lines 22–24, you see that
rSomeRef continues to refer to intOne and not intTwo.*/








