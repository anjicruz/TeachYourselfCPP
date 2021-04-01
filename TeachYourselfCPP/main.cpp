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
	intOne = 7;
	std::cout << "intOne: " << intOne << std::endl;
	std::cout << "rSomeRef: " << rSomeRef << std::endl;
	return 0;
}

