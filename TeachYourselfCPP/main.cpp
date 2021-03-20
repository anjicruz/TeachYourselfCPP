//Listing 9.4 - Demonstrates passing by value
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
}/*
Output ▼
Main.Before swap, x: 5 y : 10
Swap.Before swap, x : 5 y : 10
Swap.After swap, x : 10 y : 5
Main.After swap, x : 5 y : 10
238 LESSON 9 : Exploiting References
Analysis ▼
This program initializes two variables in main() and then passes them to the swap()
function, which appears to swap them.When they are examined again in main(), they
are unchanged!
The problem here is that xand y are being passed to swap() by value.That is, local
copies were made in the function.These local copies were changedand then thrown
away when the function returnedand its local storage was deallocated.What is preferable
is to pass xand y by reference, which changes the source values of the variable
rather than a local copy.
Two ways to solve this problem are possible in C++: You can make the parameters of
swap() pointers to the original values or you can pass in references to the original values.*/