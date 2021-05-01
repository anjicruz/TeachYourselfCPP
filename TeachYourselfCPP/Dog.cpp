// LISTING 12.2 Casting Down Using RTTI

#include <iostream>
using namespace std;

enum TYPE{HORSE, PEGASUS};

class Horse
{
public:
	void Gallop() { cout << "Galloping...\n"; }
	
private:
	int itsAge;
};

class Pegasus : public Horse
{
public:
	void Fly()
		{cout << "I can fly! I can fly! I can fly!\n";}
};

const int NumberHorses = 5;
int main()
{
	Horse* Ranch[NumberHorses];
	Horse* pHorse;
	int choice, i;
	for(i=0; i<NumberHorses; i++)
	{
		cout << "(1)Horse (2)Pegasus: ";
		cin >> choice;
		if (choice == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	cout << endl;
	for (i = 0; i < NumberHorses; i++)
	{
		Pegasus* pPeg = dynamic_cast<Pegasus*> (Ranch[i]);
		if (pPeg != NULL)
			pPeg->Fly();
		else
			cout << "Just a horse\n";
		delete Ranch[i];
	}
	return 0;
}/* Analysis ▼
This solution also works; however, it is not recommended. The desired results are achieved.Fly() is kept out of Horseand it is not called on Horse objects.When it is called on Pegasus objects(line 45), however, the objects must be explicitly cast(line 43); Horse objects don’t have the method Fly(), so the pointer must be told it is pointing to a Pegasus object before being used. The need for you to cast the Pegasus object is a warning that something might be wrong with your design.This program effectively undermines the virtual function polymorphism because it depends on casting the object to its real runtime type.

Error C2683: 'dynamic_cast': 'Horse' is not a polymorphic type (43)

*/