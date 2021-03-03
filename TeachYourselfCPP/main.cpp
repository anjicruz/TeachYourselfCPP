// A Demonstration of Passing by Value
#include <iostream>

void swap(int x, int y);


int main() 
{
	using std::cout; using std::endl; using std::cin;
	int x = 5, y = 10;
	cout << "Main. Before swap, x: " << x << " y: " << y << endl;
	swap(x, y);
	cout << "Main. After swap, x: " << x << " y: " << y << endl;
	return 0;
}

void swap(int x, int y)
{
	using std::cout; using std::endl; using std::cin;
	int temp;
	cout << "Swap. Before swap, x: " << x << " y: " << y << endl;

	temp = x;
	x = y;
	y = temp;

	cout << "Main. After swap, x: " << x << " y: " << y << endl;
}
//Output ▼
//Main. Before swap, x: 5 y: 10
//Swap. Before swap, x: 5 y: 10
//Swap. After swap, x: 10 y: 5
//Main. After swap, x: 5 y: 10
//Analysis ▼
//This program initializes two variables in main() and then passes them to the swap()
//function, which appears to swap them. When they are examined again in main(), however,
//they are unchanged!
//The variables are initialized on line 9, and their values are displayed on line 11. The
//swap() function is called on line 12, and the variables are passed in.
//Execution of the program switches to the swap() function where, on line 21, the values
//are printed again. They are in the same order as they were in main(), as expected. On
//138 LESSON 6: Organizing Code with Functions
//lines 23–25, the values are swapped, and this action is confirmed by the printout on line
//27. Indeed, while in the swap() function, the values are swapped. Execution then returns
//to line 13, back in main(), where the values are no longer swapped.
//As you’ve figured out, the values passed in to the swap() function are passed by value,
//meaning that copies of the values are made that are local to swap(). These local variables
//are swapped on lines 23–25, but the variables back in main() are unaffected.

//By definition, pass by value means you are making a copy in memory of the actual parameter's value that is passed in, a copy of the contents of the actual parameter. Use pass by value when when you are only "using" the parameter for some computation, not changing it for the client program.
//
//In pass by reference(also called pass by address), a copy of the address of the actual parameter is stored.Use pass by reference when you are changing the parameter passed in by the client program.