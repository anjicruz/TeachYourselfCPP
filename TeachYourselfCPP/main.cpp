// using cin.get()
#include <iostream>

int main() 
{
	char buffer[80] = { '\0' };
	std::cout << "Enter the string: ";
	std::cin.get(buffer, 79);                                                            
	std::cout << "Here's the buffer: " << buffer << std::endl;
	return 0;
}