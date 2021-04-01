//LISTING 9.12 Returning a Reference to a Nonexistent Object
#include <iostream>
int& GetInt();

int main()
{
	int& rInt = GetInt();
	std::cout << "rInt = " << rInt << std::endl;
	return 0;
}

int& GetInt()
{
	int LocalInt = 25;
	return LocalInt;
}
// Compile error
