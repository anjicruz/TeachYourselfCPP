//LISTING 9.6 swap() Rewritten with References

#include <iostream>

using namespace std;
void swap(int &x, int &y);

int main()
{	//using std::cout; using std::endl; using std::cin;
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << endl;


	swap(x, y);

	cout << "Main. After swap, x: " << x << " y: " << y << endl;


	return 0;
}

void swap(int &rx, int &ry)
{	//using std::cout; using std::endl; using std::cin;
	int temp;

	cout << "Swap. Before swap, rx: " << rx << " ry: " << ry << endl;


	temp = rx;
	rx = ry;
	ry = temp;


	cout << "Swap. After swap, rx: " << rx << " ry: " << ry << endl;

}/*
Output ▼
Main.Before swap, x:5 y : 10
Swap.Before swap, rx : 5 ry : 10
Swap.After swap, rx : 10 ry : 5
Main.After swap, x : 10, y : 5
Analysis ▼
Just as in the example with pointers, two variables are declared on line 10, and their values
are printed on line 12. On line 15, the function swap() is called, but note that xand
y, not their addresses, are passed.The calling function simply passes the variables.
When swap() is called, program execution jumps to line 23, where the variables are
identified as references.The values from the variables are printed on line 27, but note
that no special operators are required.These variables are aliases for the original variables
and can be used as such.
On lines 30–32, the values are swapped, and then they’re printed on line 35. Program
execution jumps back to the calling function, and on line 17, the values are printed in
main().Because the parameters to swap() are declared to be references, the variables
from main() are passed by reference, and thus their changed values are what is seen in
main() as well.As you can see from this listing, references provide the convenienceand
ease of use of normal variables, but with the powerand pass - by - reference capability of
pointers!*/