//	Demonstrates skipping the body the while loop when the condition is false.

#include <iostream>



int main() 
{	using std::cout; using std::endl; using std::cin;
	int counter;
	cout << "How many hellos?: ";
	cin >> counter;
	while (counter>0)
	{
		cout << "Hello!\n";
		counter--;
	}
	cout << "Counter is Output: " << counter << endl;
	return 0;
}
//Output ▼
//How many hellos ? : 2
//Hello!
//Hello!
//Counter is OutPut : 0
//How many hellos ? : 0
//Counter is OutPut : 0
//Analysis ▼
//The user is prompted for a starting value on line 10. This starting value is stored in the
//integer variable counter.The value of counter is tested on line 12 and decremented in
//the body of the while loop.In the output, you can see that the first time through,
//counter was set to 2, and so the body of the while loop ran twice.The second time
//through, however, the 0 was entered.The value of counter was tested on line 12 and the
//condition was false; counter was not greater than 0. The entire body of the while loop
//was skipped, and Hello was never printed.
//What if you want to ensure that Hello always prints at least once ? The while loop can’t
//accomplish this because the if condition is tested before any printing is done.You can
//force the issue with an if statement just before entering the while loop
//if (counter < 1) // force a minimum value
//	counter = 1;
//but that is what programmers call a kludge(pronounced klooj to rhyme with stooge), an
//ugly and inelegant solution.