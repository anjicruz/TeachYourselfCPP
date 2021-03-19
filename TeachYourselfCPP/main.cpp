//	Listing 9.3 - Reassigning a reference

#include <iostream>

int main()
{	//using std::std::cout; using std::std::endl; using std::cin;
	int intOne;
	int &rSomeRef = intOne;
	
	intOne = 5;
	std::cout << "intOne:" << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;

	std::cout << "intOne:" << &intOne << std::endl;
	std::cout << "rSomeRef: " << &rSomeRef << std::endl;

	int intTwo = 8;
	rSomeRef = intTwo; // reassignment happens here, not what you think!
	std::cout << "\nintOne: " << intOne << std::endl;
	std::cout << "intTwo: " <<  intTwo << std::endl;
	std::cout << "rSomeref: " <<  rSomeRef << std::endl;
	std::cout << "&intOne: " <<  &intOne << std::endl;
	std::cout << "&intTwo: " <<  &intTwo << std::endl;
	std::cout << ":&someRef: " <<  &rSomeRef << std::endl;
	return 0;
}/*
Attempting to Reassign References(Not!)
Reference variables cannot be reassigned.Even experienced C++ programmers can be
confused by what happens when you try to reassign a reference.Reference variables are
always aliases for their target.What appears to be a reassignment turns out to be the
assignment of a new value to the target.Listing 9.3 illustrates this fact.

Output ▼
intOne : 5
rSomeRef : 5
& intOne : 0012FEDC
& rSomeRef : 0012FEDC
intOne : 8
intTwo : 8
rSomeRef : 8
& intOne : 0012FEDC
& intTwo : 0012FEE0
& rSomeRef : 0012FEDC
Analysis ▼
On lines 8 and 9, an integer variable and a reference to an integer are declared.The integer
is assigned the value 5 on line 11, and the valuesand their addresses are printed on
lines 12–15.
On line 17, a new variable, intTwo, is created and initialized with the value 8. On line
18, the programmer tries to reassign rSomeRef to be an alias to the variable intTwo, but
that is not what happens.What actually happens is that rSomeRef continues to act as an
alias for intOne, so this assignment is equivalent to the following :
intOne = intTwo;
Sure enough, when the values of intOneand rSomeRef are printed(lines 19–21), they are
the same as intTwo.In fact, when the addresses are printed on lines 22–24, you see that
rSomeRef continues to refer to intOne and not intTwo.*/