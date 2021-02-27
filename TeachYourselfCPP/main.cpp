// a complex nested if statement
#include <iostream>

int main() 
{
	using std::cout;
	//using std::endl;
	using std::cin;

	int firstNumber, secondNumber;
	cout << "Enter two numbers.\nFirst: ";
	cin >> firstNumber;
	cout << "\nSecond: ";
	cin >> secondNumber;
	cout << "\n";
	
	if (firstNumber >= secondNumber)
	{
		if ((firstNumber % secondNumber) == 0)
		{
			if (firstNumber == secondNumber)
				cout << "They are the same.\n";
			else
				cout << "They are evenly divisible!\n";
		}
		else
			cout << "They are not evenly divisible!\n";
	}
	else
		cout << "The second one is larger!\n";
	return 0;
}
