// Complex while Loops

#include <iostream>

int main() 
{	
	using std::cout; using std::endl; using std::cin;
	unsigned short small;
	unsigned long large;
	unsigned long skip;
	unsigned long target;
	const unsigned short MAXSMALL = 65535;

	cout << "Enter a small number: ";
	cin >> small;
	cout << "Enter a large number: ";
	cin >> large;
	cout << "Enter a skip number: ";
	cin >> skip;
	cout << "Enter a target number: ";
	cin >> target;

	cout << endl;


	while (small<large&&small<MAXSMALL)
	{
		small++;

		if (small % skip == 0)
		{
			cout << "Skipping on " << small << endl;
			continue;
		}

		if (large == target)
		{
			cout << "Target reached!";
			break;
		}

		large -= 2;
	}

	cout << "\nSmall: " << small << " Large: " << large << endl;
	return 0;
}
//Analysis ▼
//In this play, the user lost; small became larger than large before the target number of 6
//was reached.On line 26, the while conditions are tested.If small continues to be
//smaller than large and if small hasn’t overrun the maximum value for a small int, the
//body of the while loop is entered.
//174 LESSON 7: Controlling Program Flow
//LISTING 7.4 Continued
//On line 30, the small value is taken, modulo the skip value.If small is a multiple of
//skip, the continue statement is reached and program execution jumps to the top of the
//loop back at line 26. This effectively skips over the test for the target and the decrement
//of large.
//On line 36, target is tested against the value for large.If they are the same, the user has
//won.A message is printed and the break statement is reached and executed.This causes
//an immediate break out of the while loop, and program execution resumes on line 44.
//Using while Loops 175
//
//Both continue and break should be used with caution.They are
//the next most dangerous commands after goto, for much the
//same reason.Programs that suddenly change direction are harder
//to understand, and liberal use of continue and break can render
//even a small while loop unreadable.
//A need for breaking within a loop often indicates that the terminating
//condition of the loop has not been set up with the appropriate
//Boolean expression.It is often better to use an if statement
//within a loop to skip some lines than to use a breaking statement.