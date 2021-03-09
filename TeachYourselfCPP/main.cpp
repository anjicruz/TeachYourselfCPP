// Demonstrates a while true loop 

#include <iostream>

int main() 
{	using std::cout; using std::endl; using std::cin;
	int counter = 0;

	while (true)
	{
		counter++;
		if (counter > 10)
			break;
	}
	cout << "Counter: " << counter << endl;
	return 0;
}
//Output ▼
//Counter : 11
//	Analysis ▼
//	On line 9, a while loop is set up with a condition that can never be false.The loop increments
//	the counter variable on line 11, and then on line 12 it tests to see whether counter
//	has gone past 10. If it hasn’t, the while loop iterates.If counter is greater than 10, the
//	break on line 13 ends the while loop, and program execution falls through to line 15,
//where the results are printed.
//This program works, but it isn’t pretty.This is a good example of using the wrong tool
//for the job.The same thing can be accomplished by putting the test of counter’s value
//where it belongs—in the while condition.