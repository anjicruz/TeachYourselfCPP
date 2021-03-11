//	Illustrating Nested for Loops

#include <iostream>

int main() 
{	
	using std::cout; using std::endl; using std::cin;
	int rows, columns;
	char theChar;
	cout << "How many rows? ";
	cin >> rows;
	cout << "How many columns? ";
	cin >> columns;
	cout << "What character? ";
	cin >> theChar;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << theChar;
		cout << endl;
	}
	return 0;
}/*
Output ▼
How many rows ? 4
How many columns ? 12
What character ? X
XXXXXXXXXXXX
XXXXXXXXXXXX
XXXXXXXXXXXX
XXXXXXXXXXXX
Analysis ▼
In this listing, the user is prompted for the number of rows and columns and for a character
to print.The first for loop, on line 16, initializes a counter(i) to 0, and then the
body of the outer for loop is run.
On line 18, the first line of the body of the outer for loop, another for loop is established.
A second counter(j) is initialized to 0, and the body of the inner for loop is executed.
On line 19, the chosen character is printed, and control returns to the header of the
inner for loop.Note that the inner for loop is only one statement(the printing of the
	character).The condition is tested(j < columns) and if it evaluates true, j is incremented
	and the next character is printed.This continues until j equals the number of
	columns.
	When the inner for loop fails its test, in this case after 12 Xs are printed, execution falls
	through to line 20 and a new line is printed.The outer for loop now returns to its header,
where its condition(i < rows) is tested.If this evaluates true, i is incremented and the
body of the loop is executed.
In the second iteration of the outer for loop, the inner for loop is started over.Thus, j is
reinitialized to 0 and the entire inner loop is run again.
The important idea here is that by using a nested loop, the inner loop is executed for each
iteration of the outer loop.Thus, the character is printed columns times for each row.
As an aside, many C++ programmers use the letters i and j as
counting variables.This tradition goes all the way back to FORTRAN,
in which the letters i, j, k, l, m, and n were the only counting
variables.
Although this might seem innocuous, readers of your program can
become confused by the purpose of the counter and might use it
improperly.You can even become confused in a complex program
with nested loops.It is better to indicate the use of the index variable
in its name—for instance, CustomerIndex or InputCounter.*/