// LISTING 12.4 Using Overloaded Base Class Constructors
// Calling multiple constructor
#include <iostream>
using namespace std;

typedef int HANDS;
enum COLOR{ Red, Green, Blue, Yellow, White, Black, Brown};
// On lines 9–20, the Horse class is declared. The constructor takes two parameters: One is an enumeration for colors, which is declared on line 7, and the other is a typedef declared on line 6.
class Horse
{
public:
	Horse(COLOR color, HANDS height);
	virtual ~Horse() { cout << "Horse destructor...\n"; }
	virtual void Whinny() const { cout << "Whinny!..."; }
	virtual HANDS GetHeight() const { return itsHeight; }
	virtual COLOR GetColor() const { return itsColor; }
private:
	HANDS itsHeight;
	COLOR itsColor;
};
// The implementation of the constructor on lines 22–26 simply initializes the member variables and prints a message.
Horse::Horse(COLOR color, HANDS height) :
itsColor(color), itsHeight(height)
{
	cout << "Horse constructor...\n";
}
// On lines 28–44, the Bird class is declared, and the implementation of its constructor is on lines 46–50. Again, the Bird class takes two parameters.Interestingly, the Horse constructor takes color(so that you can detect horses of different colors), and the Bird constructor takes the color of the feathers(so that those of one feather can stick together). This leads to a problem when you want to ask the Pegasus for its color(which you’ll see in Listing 12.5).
class Bird
{
public:
	Bird(COLOR color, bool migrates);
	virtual ~Bird() { cout << "Bird destructor...\n"; }
	virtual  void Chirp() { cout << "Chirp..."; }
	virtual void Fly() const
	{
		cout << "I can Fly! I can Fly! I can Fly!";
	}
	virtual COLOR GetColor() const { return itsColor; }
	virtual bool GetMigration() const { return itsMigration; }

private:
	COLOR itsColor;
	bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates) :
itsColor(color), itsMigration(migrates)
{
	{ cout << "Bird constructor...\n"; }
}
// The Pegasus class itself is declared on lines 52–65, and its constructor is on lines 67–77. The initialization of the Pegasus object includes three statements.First, the Horse constructor initialized with colorand height(line 72).The Bird constructor is then initialized with colorand the Boolean indicating whether it migrates(line 73).Finally, the Pegasus member variable itsNumberBelievers is initialized.After all that is accomplished, the body of the Pegasus constructor is called.
class Pegasus
{
public:
	void Chirp() const { Whinny(); }
	Pegasus(COLOR, HANDS, bool, long);
	~Pegasus() { cout << "Pegasus destructor...\n"; }
	virtual long GetNumberBelievers() const
	{
		return itsNumberBelievers;
	}
	
private:
	long itsNumberBelievers;
};

Pegasus::Pegasus(
	COLOR aColor,
	HANDS height,
	bool migrates,
	long NumBelieve):
	Horse(aColor, height),
	Bird(aColor, migrates),
	itsNumberBelievers(NumBelieve)
{
	cout << "Pegasus constructor...\n";
}
// In the main() function, a Pegasus pointer is created in line 81. This object is then used to access the member functions that were derived from the base classes.The access of these methods is straightforward.
int main()
{
	Pegasus* pPeg = new Pegasus(Red, 5, true, 10);
	pPeg->Fly();
	pPeg->Whinny();
	cout << "\nYour Pegasus is" << pPeg->GetHeight();
	cout << " hands tall and ";
	if (pPeg->GetMigration())
		cout << "it does migrate.";
	else
		cout << "it does not migrate.";
	cout << "\nA total of " << pPeg->GetNumberBelievers();
	cout << " people believe it still exist." << endl;
	delete pPeg;
	return 0;
}