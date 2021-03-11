//	Empty for Loops, Illustrates the Null Statement in a for Loop 

#include <iostream>


int main() 
{	// using std::cout; using std::endl; using std::cin;
	for (int i = 0; i < 5; std::cout << "i: " << i++ << std::endl);
	return 0;
}/*
Output ▼
i : 0
	i : 1
	i : 2
	i : 3
	i : 4
	186 LESSON 7 : Controlling Program Flow
	Analysis ▼
	The for loop on line 8 includes three statements : The initialization statement establishes
	the counter i and initializes it to 0. The condition statement tests for i<5, and the action
	statement prints the value in i and increments it.
	Nothing is left to do in the body of the for loop, so the null statement(;) is used.Note
	that this is not a well - designed for loop : The action statement is doing far too much.
	This would be better rewritten as
	8 : for (int i = 0; i<5; i++)
	9 : cout << “i : “ << i << endl;
Although both do the same thing, this example is easier to understand.*/