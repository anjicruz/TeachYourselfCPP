//	Null Statements in for Loops; Listing 7.11

#include <iostream>


int main() 
{	using std::cout; using std::endl; using std::cin;
	int counter = 0;

	for (; counter < 5;)
	{
		counter++;
		cout << "Looping! ";
	}
	
	cout << "\nCounter: " << counter << endl;
	return 0;
}/*
Output ▼
Looping!Looping!Looping!Looping!Looping!
Counter: 5.
	Analysis ▼
	You might recognize this as exactly like the while loop illustrated in Listing 7.8.On line
	8, the counter variable is initialized.The for statement on line 10 does not initialize any
	values, but it does include a test for counter < 5. No increment statement exists, so this
	loop behaves exactly as if it had been written
	while (counter < 5)
		You can once again see that C++ gives you several ways to accomplish the same thing.
		No experienced C++ programmer would use a for loop in this way shown in Listing
		7.11, but it does illustrate the flexibility of the for statement.In fact, it is possible, using
		break and continue, to create a for loop with none of the three statements.*/