// A Demonstration of the Conditional Operator
#include <iostream>

int main() 
{

	using std::cout; using std::endl; using std::cin;
	int x, y, z;
	cout << "Enter two numbers.\n";
	cout << "First x: ";
	cin >> x;
	cout << "\nSecond y: ";
	cin >> y;
	cout << endl;

	if (x > y)
		z = x;
	else
		z = y;

	cout << "After if test, z: " << z;
	cout << endl;

	z = (x > y) ? x : y;
	cout << "After conditional test, z: " << z;
	cout << endl;
	return 0;
}
//Three integer variables are created : x, y, and z.The first two are given values by the user.
//The if statement on line 16 tests to see which is larger and assigns the larger value to z.
//This value is printed on line 21.
//122 LESSON 5 : Working with Expressions, Statements, and Operators
//The conditional operator on line 24 makes the same test and assigns z the larger value.It
//is read like this : “If x is greater than y, return the value of x; otherwise, return the value
//of y.” The value returned is assigned to z.That value is printed on line 26. As you can
//see, the conditional statement is a shorter equivalent to the if...else statement
