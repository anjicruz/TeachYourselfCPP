// Complex while Loops

#include <iostream>

int main() 
{	
	using std::cout; using std::endl; using std::cin;
	unsigned short small;
	unsigned long large;
	const unsigned short MAXSMALL = 65535;

	cout << "Enter a small number: ";
	cin >> small;
	cout << "Enter a large number: ";
	cin >> large;

	cout << "small: " << small << "...";


	while (small<large&&small<MAXSMALL)
	{
		if (small % 5000 == 0)
			cout << ".";

		small++;
		large -= 2;
	}

	cout << "\nSmall: " << small << " Large: " << large << endl;
	return 0;
}
//Analysis ▼
//This program is a game.Enter two numbers, one small and one large.The smaller number
//will count up by ones, and the larger number will count down by twos.The goal of
//the game is to guess when they’ll meet.
//On lines 12–15, the numbers are entered.Line 20 sets up a while loop, which will continue
//only as long as two conditions are met :
//1. small is not bigger than large.
//2. small doesn’t overrun the size of a small integer(MAXSMALL).
//On line 22, the value in small is calculated modulo 5, 000. This does not change the
//value in small; however, it returns the value 0 only when small is an exact multiple of
//5, 000. Each time this happens, a dot(.) is printed to the screen to show progress.On line
//25, small is incremented, and on line 26, large is decremented by 2. When either of the
//two conditions in the while loop fails, the loop ends and execution of the program continues
//after the while loop’s closing brace on line 27.