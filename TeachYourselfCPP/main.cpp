// A Demonstration of Multiple return Statements
#include <iostream>


int Doubler(int AmountToDouble);

int main() 
{
	using std::cout; using std::endl; using std::cin;
	
	int result = 0;
	int input;

	cout << "Enter a number between 0 and 10,000 to double: ";
	cin >> input;

	cout << "\nBefore doubler is called... ";
	cout << "\ninput: " << input << " doubled: " << result << endl;

	result = Doubler(input);

	cout << "\nBack from Doubler...\n";
	cout << "\ninput: " << input << " doubled: " << result << endl;

	return 0;
}

int Doubler(int original)
{
	if (original <= 10000)
		return original * 2;
	else
		return -1;
	std::cout << "You can't get here!" << std::endl;
}
//Analysis ▼
//A number is requested on lines 14 and 15 and printed on lines 17 and 18, along with the
//local variable result.The function Doubler() is called on line 20, and the input value
//is passed as a parameter.The result will be assigned to the local variable, result, and the
//values will be reprinted on line 23.
//On line 30, in the function Doubler(), the parameter is tested to see whether it is less
//than or equal to 10, 000. If it is, the function returns twice the original number.If the
//value of original is greater than 10, 000, the function returns –1 as an error value.
//The statement on line 34 is never reached because regardless of whether the value is less
//than or equal to 10, 000 or greater than 10, 000, the function returns on either line 31 or
//line 33—before it gets to line 34. A good compiler warns that this statement cannot be
//executed, and a good programmer takes it out!