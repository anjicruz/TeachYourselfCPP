//LISTING 9.1 Creating and Using References
#include <iostream>
int& GetInt();

int main()
{
	int intOne;
	int& rSomeRef = intOne; // rSomeRef is a reference to an integer.The reference (rSomeref) is initialized to refer to intOne.” The space before the reference operator is required.
	intOne = 5;
	std::cout << "intOne: " << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;
	// intOne = 7;
	std::cout << "&intOne: " << &intOne << std::endl;
	std::cout << "&rSomeRef: " << &rSomeRef << std::endl;
	/*std::cout << "intOne: " << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;*/
	return 0;
}/*
Analysis ▼
rSomeRef is again initialized as a reference to intOne.This time, the addresses of the two
variables are printed in lines 15 and 16, and they are identical.
C++ gives you no way to access the address of the reference itself because it is not
meaningful as it would be if you were using a pointer or other variable.References are
initialized when created, and they always act as a synonym for their target, even when
the address - of operator is applied.*/

