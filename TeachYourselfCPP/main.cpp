//	LISTING 9.2 Taking the Address of a Reference

#include <iostream>

int main()
{
	//using std::std::cout; using std::std::endl; using std::cin;
	int intOne;
	int &rSomeRef = intOne;
	
	intOne = 5;
	std::cout << "intOne:" << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;

	std::cout << "intOne:" << &intOne << std::endl;
	std::cout << "rSomeRef: " << &rSomeRef << std::endl;

	return 0;
}/*
Output ▼
intOne : 5
rSomeRef : 5
& intOne : 0x3500
& rSomeRef : 0x3500
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
//
//Be careful to distinguish between the& symbol on line 9 of Listing 9.2, which declares a
//reference to an integer named rSomeRef, and the& symbols on lines 15 and 16, which
//return the addresses of the integer variable intOne and the reference rSomeRef.The compiler
//knows how to distinguish between the two uses by the context in which they are
//being used.