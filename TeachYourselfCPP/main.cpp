// Reassigning a reference
#include <iostream>

int main()
{
	int intOne;
	int& rSomeRef = intOne; // rSomeRef is a reference to an integer.The reference (rSomeref) is initialized to refer to intOne.” The space before the reference operator is required.
	intOne = 5;
	std::cout << "intOne: " << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;

	std::cout << "&intOne: " << &intOne << std::endl;
	std::cout << "&rSomeRef: " << &rSomeRef << std::endl;
	
	int intTwo = 8; // not what you think!
	rSomeRef = intTwo;
	std::cout << "\nintOne: " << intOne << std::endl;
	std::cout << "intTwo: " << intTwo << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;
	std::cout << "&intOne: " << &intOne << std::endl; 
	std::cout << "&intTwo: " << &intTwo << std::endl; 
	std::cout << "&rSomeRef: " << &rSomeRef << std::endl;

	return 0;
}/*
The values of intOne, intTwoand rSomeRef is 8, but the memory address of& intOneand& rSomeRef are identical.The memory address of of& intTwo is different.You cannot Reassigning a reference*/
