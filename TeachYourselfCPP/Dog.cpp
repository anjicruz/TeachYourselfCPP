//Listing 11.9 Multiple virtual functions called in turn
#include <iostream>
using namespace std;
// This stripped-down program, which provides only the barest functionality to each class,illustrates virtual functions in their purest form.Four classes are declared : Dog, Cat, Horse, and Pig.All four are derived from Mammal. On line 10, Mammal’s Speak() function is declared to be virtual.On lines 19, 25, 32, and 38, the four derived classes override the implementation of Speak().
class Mammal
{
public:
	Mammal():itsAge(1){}
	virtual ~Mammal() {}
	virtual void Speak() const { cout << "Mammal speak!\n"; }

protected:
	int itsAge;
};

class Dog : public Mammal
{
public:
	void Speak() const { cout << "Woof!\n"; }
};

class Cat : public Mammal
{
public:
	void Speak() const { cout << "Meow!\n"; }
};


class Horse : public Mammal
{
public:
	void Speak() const { cout << "Winnie!\n"; }
};
// On lines 46–64, the program loops five times. Each time, the user is prompted to pick which object to create, and a new pointer to that object type is added to the array from within the switch statement on lines 50–62.
// At the time this program is compiled, it is impossible to know which object types will be created, and thus which Speak() methods will be invoked.The pointer ptr is bound to its object at runtime.This is called dynamic binding, as opposed to static binding, runtime binding, or compile - time binding.
class Pig : public Mammal
{
public:
	void Speak() const { cout << "Oink!\n"; }
};
int main()
{
	Mammal* theArray[5];
	Mammal* ptr;
	int choice, i;
	for (i=0; i<5; i++)
	{
		cout << "(1) dog (2)cat (3)horse (4)pig: ";
		cin >> choice;
		switch (choice)
		{
		case 1: ptr = new Dog;
			break;
		case 2: ptr = new Cat;
			break;
		case 3: ptr = new Horse;
			break;
		case 4: ptr = new Pig;
			break;
		default: ptr = new Mammal;
			break;	
		}
		theArray[i] = ptr;
	}
	for (i = 0; i < 5; i++)
		theArray[i]->Speak();
	return 0;
}
//On lines 65 and 66, the program loops through the array again. This time, each object in
//the array has its Speak() method called.Because Speak() was virtual in the base class,
//the appropriate Speak() methods are called for each type.You can see in the output that
//if you choose each different type, that the corresponding method is indeed called.