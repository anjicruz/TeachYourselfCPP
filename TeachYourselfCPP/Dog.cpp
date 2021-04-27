// LISTING 12.1 Getting Horses to Fly with Single Inheritance

#include <iostream>
using namespace std;

class Horse
{
public:
	void Gallop() { cout << "Galloping...\n"; }
	virtual void Fly() { cout << "Horses can't fly.\n"; }
private:
	int itsAge;
};
// This program certainly works, although at the expense of the Horse class having a Fly() method.On line 10, the method Fly() is provided to Horse. In a real - world class, you might have it issue an error or fail quietly. On line 18, the Pegasus class overrides the Fly() method to “do the right thing, ” represented here by printing a happy message.
class Pegasus : public Horse
{
public:
	void Fly()
		{cout << "I can fly! I can fly! I can fly!\n";}
};
// The array of Horse pointers called Ranch on line 25 is used to demonstrate that the correct Fly() method is called, based on the runtime binding of the Horse or Pegasus object. In lines 28–37, the user is prompted to select a Horse or a Pegasus.An object of the corresponding type is then created and placed into the Ranch array.
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
		Ranch[i]->Fly();
		delete Ranch[i];
	}
	return 0;
}  /*In lines 38–43, the program loops again through the Ranch array.This time, each object in the array has its Fly() method called. Depending on whether the object is a Horse or a Pegasus, the correct Fly() method is called.You can see this in the output.Because this program will no longer use the objects in Ranch, in line 42, a call to delete is made to free the memory used by each object.*/

//These examples have been stripped down to their bare essentials
//to illustrate the points under consideration. Constructors, virtual
//destructors, and so on have been removed to keep the code simple.
//This is not recommended for your programs.