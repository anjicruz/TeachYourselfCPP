// demonstrates variables scoped within a block

#include <iostream>
void myFunc();

int main() 
{
	using std::cout; using std::endl; using std::cin;


	int x = 5;
	cout << "\nIn main x is: " << x;

	myFunc();

	cout << "\nBack in main x is: " << x << endl;
	return 0;
}

void myFunc()
{
	using std::cout; using std::endl; using std::cin;
	int x = 8;
	cout << "\nIn myFunc, local x: " << x << endl;
	{
		cout << "\nIn block in myFunc, x is: " << x;

		int x = 9;

		cout << "\nVery local x: " << x;
	}

	cout << "\nOut of block, in myFunc, x:" << x << endl;
}
//This program begins with the initialization of a local variable, x, on line 10, in main().
//The printout on line 11 verifies that x was initialized with the value 5. On line 13,
//MyFunc() is called.
//On line 21 within MyFunc(), a local variable, also named x, is initialized with the value
//8. Its value is printed on line 22.
//The opening brace on line 24 starts a block.The variable x from the function is printed
//again on line 25. A new variable also named x, but local to the block, is created on line
//27 and initialized with the value 9. The value of this newest variable x is printed on line
//29. The local block ends on line 30, and the variable created on line 27 goes out of scope
//and is no longer visible.
//When x is printed on line 32, it is the x that was declared on line 21 within myFunc().
//This x was unaffected by the x that was defined on line 27 in the block; its value is still 8.
//On line 33, MyFunc() goes out of scope, and its local variable x becomes unavailable.
//Execution returns to line 14. On line 15, the value of the local variable x, which was created
//on line 10, is printed.It was unaffected by either of the variables defined in
//MyFunc().Needless to say, this program would be far less confusing if these three variables
//were given unique names!
