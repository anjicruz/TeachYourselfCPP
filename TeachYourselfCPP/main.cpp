//	Demonstrating a Forever Loop. Listing 7.17
//Using a forever loop to manage user interaction
#include <iostream>

// prototypes
int menu();
void DoTaskOne();
void DoTaskMany(int);



int main()
{	using std::cout; using std::endl; using std::cin;
	bool exit = false;
	for (;;)
	{
		int choice = menu();
		switch (choice)
		{
			case(1):
				DoTaskOne();
				break;
			case(2):
				DoTaskMany(2);
				break;
			case(3):
				DoTaskMany(3);
				break;
			case(4):
				continue;
				break;
			case(5):
				exit=true;
				break;
			default:
				cout << "Please select again! " << endl;
				break;
		}
		
		if (exit = true)
			break;
	}
	return 0;
}

int menu()
{	using std::cout; using std::endl; using std::cin;
	int choice;

	cout << " ****Menu**** " << endl << endl;
	cout << "(1) Choice one." << endl;
	cout << "(2) Choice two." << endl;
	cout << "(3) Choice three." << endl;
	cout << "(4) Redisplay Menu." << endl;
	cout << "(5) Quit." << endl;
	cout << ": ";
	cin >> choice;
	return choice;
}

void DoTaskOne()
{	using std::cout; using std::endl; using std::cin;
	cout << "Task One! " << endl;
}

void DoTaskMany(int which)
{	using std::cout; using std::endl; using std::cin;
	if (which == 2)
		cout << "Task Two! " << endl;
	else
		cout << "Task Three! " << endl;
}
//Listing 7.17 returns to the for (;;) loop discussed earlier.These loops are also called
//forever loops because they will loop forever if a break is not encountered.In Listing
//7.17, the forever loop is used to put up a menu, solicit a choice from the user, act on the
//choice, and then return to the menu.This continues until the user chooses to exit.
//Some programmers like to write :
//#define EVER ;;
//for (EVER)
//{
//	// statements...
//}
//NOTE
//A forever loop is a loop that does not have an exit condition.To exit the loop, a break
//statement must be used.Forever loops are also known as eternal or infinite loops.

//Output ▼
//**** Menu ****
//(1) Choice one.
//(2) Choice two.
//(3) Choice three.
//(4) Redisplay menu.
//(5) Quit.
//	: 1
//	Task One!
//	**** Menu ****
//	(1) Choice one.
//	(2) Choice two.
//	(3) Choice three.
//	(4) Redisplay menu.
//	(5) Quit.
//	Controlling Flow with switch Statements 197
//	7
//	LISTING 7.17 Continued
//	: 3
//	Task Three!
//	**** Menu ****
//	(1) Choice one.
//	(2) Choice two.
//	(3) Choice three.
//	(4) Redisplay menu.
//	(5) Quit.
//	: 5
//Analysis ▼
//This program brings together a number of concepts from this lesson and previous
//lessons.It also shows a common use of the switch statement.
//The forever loop begins on line 15. The menu() function is called, which prints the menu
//to the screen and returns the user’s selection.The switch statement, which begins on line
//18 and ends on line 38, switches on the user’s choice.

//If the user enters 1, execution jumps to the case (1): statement on line 20. Line 21
//switches execution to the DoTaskOne() function, which prints a message and returns.On
//its return, execution resumes on line 22, where the break ends the switch statement, and
//execution falls through to line 39. On line 40, the variable exit is evaluated to see
//whether it is true.If it evaluates as true, the break on line 41 is executed and the for (;;)
//loop ends; but if it evaluates false, execution resumes at the top of the loop on line 15.

//Note that the continue statement on line 30 is redundant.If it were left out and the
//break statement were encountered, the switch would end, exit would evaluate as false,
//the loop would reiterate, and the menu would be reprinted.The continue does, however,
//bypass the test of exit.
