// demonstrates if statement with else clause
#include <iostream>

int main() 
{
	using std::cout;
	//using std::endl;
	using std::cin;

	int firstNumber, secondNumber;
	cout << "Please enter a big number: ";
	cin >> firstNumber;
	cout << "\nPlease enter a smaller number: ";
	cin >> secondNumber;
	if (firstNumber > secondNumber)
		cout << "\nThanks!\n\n";
	else
		cout << "\nThe first number is not bigger!\n\n";
	
	return 0;
}
