// while Loops

#include <iostream>

int main() 
{
	using std::cout; using std::endl; using std::cin;
	int counter = 0;

	while (counter < 5)
	{
		counter++;
		cout << "Counter: " << counter << endl;
	}
	cout << "Complete. Counter: " << counter << endl;
	return 0;
}
//Analysis ▼
//This simple program demonstrates the fundamentals of the while loop.On line 8, an
//integer variable called counter is created and initialized to zero.This is then used as a
//part of a condition.The condition is tested, and if it is true, the body of the while loop is
//executed.In this case, the condition tested on line 10 is whether counter is less than 5. If
//the condition is true, the body of the loop is executed; on line 12, the counter is incremented,
//and on line 13, the value is printed.When the conditional statement on line 10
//fails(when counter is no longer less than 5), the entire body of the while loop(lines
//11–14) is skipped.Program execution falls through to line 15.
