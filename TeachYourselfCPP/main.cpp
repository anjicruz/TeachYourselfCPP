//	Demonstrating Multiple Statements in for Loops

#include <iostream>


int main() 
{	
	using std::cout; using std::endl; using std::cin;
	for (int i = 0, j=0; i < 3; i++, j++)
		cout << "i: " << i << " j: " << j << endl;
	return 0;
}/*
Output ▼
	i : 0 j : 0
	i : 1 j : 1
	i : 2 j : 2
	Analysis ▼
	On line 9, two variables, i and j, are initialized with the value 0. A comma is used to
	separate the two separate expressions.You can also see that these initializations are separated
	from the test condition by the expected semicolon.
	When this program executes, the test(i<3) is evaluated, and because it is true, the body
	of the for statement is executed, where the values are printed.Finally, the third clause in
	the for statement is executed.As you can see, two expressions are here as well.In this
	case, both i and j are incremented.
	After line 10 completes, the condition is evaluated again, and if it remains true, the
	actions are repeated(i and j are again incremented), and the body of the loop is executed
	again.This continues until the test fails, in which case the action statement is not
	executed and control falls out of the loop.*/
//The for Statement
//The syntax for the for statement is as follows :
//for (initialization; test; action)
//statement;
//The initialization statement is used to initialize the state of a counter or to otherwise
//prepare for the loop.test is any C++ expression and is evaluated each time
//through the loop.If test is true, the body of the for loop is executed and then the
//action in the header is executed(typically the counter is incremented).