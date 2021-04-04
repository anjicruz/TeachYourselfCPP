// LISTING 9.7 Returning Values with Pointers
#include <iostream>



short Factor(int n, int* pSquared, int* pCubed);

int main()
{
	int number, squared, cubed; // On line 10, number, squared, and cubed are defined as short integers.
	short error;

	std::cout << "Enter a number(0-20): ";
	std::cin >> number; // number is assigned a value based on user input on line 14.

	error = Factor(number, &squared, &cubed); // On line 16, this number and the addresses of squared and cubed are passed to the function Factor().

	if (!error)
	{
		std::cout << "number: " << number << std::endl;
		std::cout << "square: " << squared << std::endl;
		std::cout << "cubed: " << cubed << std::endl;
	}
	else
		std::cout << "Error encountered!!" << std::endl;
	return 0;
}

short Factor(int n, int* pSquared, int* pCubed)
{ // On line 32, Factor() examines the first parameter, which is passed by value. If it is greater than 20 (the maximum value this function can handle), it sets the return value, Value, to a simple error value. Note that the return value from Function() is reserved for either this error value or the value 0, indicating all went well, and note that the function returns this value on line 40.
	short Value = 0;
	if (n > 20) 
		Value = 1; // Error encountered!!
	else
	{
		*pSquared = n * n;
		*pCubed = n * n * n;
		Value = 0; // value 0, indicating all went well!
	}
	return Value;
}

//The actual values needed, the square and cube of number, are not returned by using the return mechanism; rather, they are returned by changing the pointers that were passed into the function.On lines 36 and 37, the pointers are assigned their return values.These values are assigned to the original variables by the use of indirection.You know this by the use of the dereference operator (*) with the pointer names.On line 38, Value is assigned a success value, and on line 40, it is returned.
//Because passing by reference or by pointer allows uncontrolled minimum required for the function to do its job.This helps to ensure that the function is safer to useand more easily understandable.