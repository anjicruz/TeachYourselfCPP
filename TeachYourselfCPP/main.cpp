//	Illustrating an Empty for Loop Statement

#include <iostream>


int main() 
{	// using std::cout; using std::endl; using std::cin;
	int counter = 0;
	int max;
	std::cout << "How many hellos? ";
	std::cin >> max;
	for (;;) // a loop that doesn't end
	{
		if (counter < max) // test
		{
			std::cout << "Hello! " << std::endl;
			counter++;
		}
		else
			break;
	}
	return 0;
}/*
Output ▼
How many hellos ? 3
Hello!
Hello!
Hello!
Analysis ▼
The for loop has now been pushed to its absolute limit.Initialization, test, and action
have all been taken out of the for statement on line 12. The initialization is done on line
8, before the for loop begins.The test is done in a separate if statement on line 14, and
if the test succeeds, the action, an increment to counter, is performed on line 17. If the
test fails, breaking out of the loop occurs on line 20.
Although this particular program is somewhat absurd, sometimes a for (;;) loop or a
while (true) loop is just what you’ll want.You’ll see an example of a more reasonable
use of such loops when switch statements are discussed later in this lesson.*/