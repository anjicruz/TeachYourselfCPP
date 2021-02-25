// A Demonstration of Prefix and Postfix Operators
#include <iostream>

int main() 
{
	using std::cout;
	using std::endl;

	int myAge = 39;
	int yourAge = 39;
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	myAge++; //postfix increment
	++yourAge; // prefix increment
	cout << "One year passes...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	cout << "Another year passes...\n";
	cout << "I am: " << myAge++ << " years old.\n";
	cout << "I am: " << ++yourAge << " years old.\n";
	cout << "Let's print it again...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "I am: " << yourAge << " years old.\n";
	return 0;
	/*On lines 9 and 10, two integer variables are declared, and each is initialized with the
		value 39. Their values are printed on lines 11 and 12.
		102 LESSON 5: Working with Expressions, Statements, and Operators
		On line 13, myAge is incremented using the postfix increment operator, and on line 14,
		yourAge is incremented using the prefix increment operator. The results are printed on
		lines 16 and 17, and they are identical(both 40).
		On line 19, myAge is incremented as part of the printing statement, using the postfix
		increment operator. Because it is postfix, the increment happens after the printing, so the
		value 40 is printed again, and then the myAge variable is incremented.In contrast, on line
		20, yourAge is incremented using the prefix increment operator. Thus, it is incremented
		before being printed, and the value displays as 41.
		Finally, on lines 22 and 23, the values are printed again.Because the increment statement
		has completed, the value in myAge is now 41, as is the value in yourAge*/
}
