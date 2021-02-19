#include <iostream>
int Subtract(int first, int second)
{
	std::cout << "Subtraction equals: " << first - second << "\n";
	return (first - second);
}
int main() 
{
	std::cout << "I'm on main: \n";
	int a, b;
	std::cin >> a;
	std::cin >> b;
	Subtract(a, b);
	std::cout << "Exiting...\n";

	return 0;
}