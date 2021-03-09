//	Demonstrating a do...while Loop

#include <iostream>



int main() 
{	using std::cout; using std::endl; using std::cin;
	int counter;
	cout << "How many hellos?: ";
	cin >> counter;
	do
	{
		cout << "Hello!\n";
		counter--;
	} while (counter > 0);
	cout << "Counter is Output: " << counter << endl;
	return 0;
}/*
Output ▼
How many hellos ? 2
Hello
Hello
Counter is : 0
Analysis ▼
Like the previous program, Listing 7.7 prints the word Hello to the console a specified
number of times.Unlike the preceding program, however, this program will always print
at least once.
The user is prompted for a starting value on line 10, which is stored in the integer variable
counter.In the do...while loop, the body of the loop is entered before the condition
is tested, and, therefore, the body of the loop is guaranteed to run at least once.On
line 14, the hello message is printed; on line 15, the counter is decremented; execution
jumps to the top of the loop on line 13—otherwise, it falls through to line 17.
The continue and break statements work in a do...while loop exactly as they do in a
while loop.The only difference*/