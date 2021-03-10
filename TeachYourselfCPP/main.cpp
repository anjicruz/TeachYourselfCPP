//	while Reexamined - Looping with while

#include <iostream>


int main() 
{	using std::cout; using std::endl; using std::cin;
	int counter=0;

	while (counter < 5)
	{
		counter++; // commenting this line does an endless loop
		cout << "Looping!   ";
	}

	cout << "\nCounter: " << counter << endl;
	return 0;
}
//Output ▼
//Looping!Looping!Looping!Looping!Looping!
//Counter: 5.
//	Analysis ▼
//	In this listing, you can see that three steps are occurring.First, the starting condition is
//	set on line 8 : counter is initialized to 0. On line 10, the test of the condition occurs when
//	counter is tested to see whether it is less than 5. Finally, the counter variable is incremented
//	on line 12. This loop prints a simple message at line 13. As you can imagine,
//	more important work could be done for each increment of the counter.
//	A for loop combines the three steps into one statement.The three steps are initializing,
//	testing, and incrementing.A for statement consists of the keyword for followed by a
//	pair of parentheses.Within the parentheses are three statements separated by semicolons :
//for (initialization; test; action)
//{
//	...
//}
//The first expression, initialization, is the starting conditions or initialization.Any
//legal C++ statement can be put here, but typically this is used to create and initialize a
//counting variable.The second expression, test, is the test, and any legal C++ expression
//can be used here.This test serves the same role as the condition in the while loop.The
//third expression, action, is the action that will take place.This action is typically the
//Looping with the for Statement 181
//7
//LISTING 7.8 Continued
//increment or decrement of a value, although any legal C++ statement can be put here.