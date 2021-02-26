// demonstrates if statement
#include <iostream>

int main() 
{
	using std::cout;
	using std::endl;
	using std::cin;
	int MetsScore, YankeesScore;
	cout << "Enter the score for the Mets: ";
	cin >> MetsScore;
	cout << "Enter the score for the Yankees: ";
	cin >> YankeesScore;
	cout << endl;
	if(MetsScore > YankeesScore)
		cout << "Let's go Mets!\n";
	if (MetsScore < YankeesScore) { cout << "Go Yankees!\n"; }
	if (MetsScore == YankeesScore)
	{
		cout << "A tie. Nooo, cant be.\n";
		cout << "Give me the real score for the Yanks.\n";
		cin >> YankeesScore;
		if (MetsScore > YankeesScore) cout << "Knew it. Let's go Mets!\n";
		if(YankeesScore>MetsScore) cout << "Knew it. Let's go Yanks!\n";
		if (YankeesScore == MetsScore) cout << "Wow. It really was a tie!\n";
	}
	cout << "Thanks for letting me know!\n";
	return 0;
}
