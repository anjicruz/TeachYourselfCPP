// Looping with the Keyword goto

#include <iostream>

int main() 
{
	using std::cout; using std::endl; using std::cin;
	int counter = 0;
loop:
	counter++;
	cout << "Counter: " << counter << endl;
	if (counter < 5)
		goto loop;

	cout << "Complete. Counter: " << counter << endl;
	return 0;
}
//On line 8, counter is initialized to zero.A label called loop is on line 9, marking the top
//of the loop.counter is incremented and its new value is printed on line 11. The value of
//counter is tested on line 12. If the value is less than 5, the if statement is true and the
//goto statement is executed.This causes program execution to jump back to the loop
//label on line 9. The program continues looping until counter is equal to 5, at which time
//it “falls through” the loop and the final output is printed.
//Why goto Is Shunned
//As a rule, programmers avoid goto, and with good reason. goto statements can cause a
//jump to any location in your source code, backward or forward.The indiscriminate use
//of goto statements has caused tangled, miserable, impossible - to - read programs known as
//spaghetti code.