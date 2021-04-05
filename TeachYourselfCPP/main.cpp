//Listing 9.8 Returning multiple values from a function using references


#include <iostream>



enum ERR_CODE {SUCCESS, ERROR};

ERR_CODE Factor(int, int&, int&);

int main()
{
	int number, squared, cubed; 
	ERR_CODE result;

	std::cout << "Enter a number(0-20): ";
	std::cin >> number; 
	result = Factor(number, squared, cubed); 

	if (result == SUCCESS)
	{
		std::cout << "number: " << number << std::endl;
		std::cout << "square: " << squared << std::endl;
		std::cout << "cubed: " << cubed << std::endl;
	}
	else
		std::cout << "Error encountered!!" << std::endl;
	return 0;
}

ERR_CODE Factor(int n, int &rSquared, int &rCubed)
{ 
	if (n > 20)
		return ERROR;
	else
	{
		rSquared = n * n;
		rCubed = n * n * n;
		return SUCCESS;
	}
}/*
Analysis ▼
Listing 9.8 is identical to Listing 9.7, with two exceptions.The ERR_CODE enumeration
makes the error reporting a bit more explicit on lines 36 and 41, as well as the error handling
on line 22.
The larger change, however, is that Factor() is now declared to take references to
squaredand cubed rather than to pointers.This makes the manipulation of these parameters
far simplerand easier to understand.*/
