//Listing 9.8 Returning multiple values from a function
// using references

#include <iostream>

using namespace std;

enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE Factor(int, int&, int&);

int main()
{	//using std::cout; using std::endl; using std::cin;
	int number, squared, cubed;
	ERR_CODE result;

	cout << "Enter a number(0-20): ";
	cin >> number;

	result = Factor(number, squared, cubed);

	if (result==SUCCESS)
	{
		cout << "number: " << number << endl;
		cout << "square: " << squared << endl;
		cout << "cubed: " << cubed << endl;
	}
	else
		cout << "Error encountered!!" << endl;
	return 0;
}

ERR_CODE Factor(int n, int &rSquared, int& rCubed)
{
	short Value = 0;
	if (n > 20)
		Value = 1;
	else
	{
		rSquared = n * n;
		rCubed = n * n * n;
		Value = 0;
	}
	return SUCCESS;
}/*
Output ▼
Enter a number(0 - 20) : 3
number : 3
square : 9
cubed : 27

LISTING 9.8 Continued
Analysis ▼
Listing 9.8 is identical to Listing 9.7, with two exceptions.The ERR_CODE enumeration
makes the error reporting a bit more explicit on lines 36 and 41, as well as the error handling
on line 22.
The larger change, however, is that Factor() is now declared to take references to
squaredand cubed rather than to pointers.This makes the manipulation of these parameters
far simplerand easier to understand.*/