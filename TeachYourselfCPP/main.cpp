// demonstrates why braces are important in nested if statements
#include <iostream>

int main() 
{
	using std::cout;
	using std::endl;
	using std::cin;

	int x;
	cout << "Enter a number less than 10 or greater than 100 : ";
	cin >> x;
	//cout << "\n";
	if (x >= 100)
	{
		if (x > 100)
			cout << "More than 100, Thanks!\n";
	}
		else
			cout << "Less than 10, Thanks!\n";
		

	
	return 0;
}
