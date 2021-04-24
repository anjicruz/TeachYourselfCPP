//Listing 11.10 Data slicing with passing by value
#include <iostream>
using namespace std;
// On lines 5–26, stripped-down versions of the Mammal, Dog, and Cat classes are declared. Three functions are declared : PtrFunction(), RefFunction(), and ValueFunction(). They take a pointer to a Mammal, a Mammal reference, and a Mammal object, respectively. As you can see on lines 60–73, all three functions do the same thing—they call the Speak() method.
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
// The user is prompted to choose a Dog or a Cat, and based on the choice that is made, a pointer to the correct type is created on lines 44 or 46. In the first line of the output, the user chooses Dog.The Dog object is created on the free store on line 44. The Dog is then passed to a function as a pointer on line 53, as a reference on line 54, and by value on line 55. The pointer and reference calls invoke the virtual functions, and the Dog->Speak() member function is invoked.This is shown on the first two lines of output after the user’s choice.
void ValueFunction(Mammal);
void PtrFunction(Mammal*);
void RefFunction(Mammal&);
int main()
{
	Mammal* ptr = 0;
	int choice, i;
	while (1)
	{
		bool fQuit = false;
		cout << "(1) dog (2)cat (0)Quit: ";
		cin >> choice;
		switch (choice)
		{
		case 0: fQuit = true;
			break;
		case 1: ptr = new Dog;
			break;
		case 2: ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;	
		}
		if (fQuit==true)
			break;
		PtrFunction(ptr);
		RefFunction(*ptr);
		ValueFunction(*ptr);
	}
	return 0;
}
// The dereferenced pointer, however, is passed by value on line 55 to the function on lines60–63.The function expects a Mammal object, and so the compiler slices down the Dog object to just the Mammal part.When the Mammal Speak() method is called on line 72, only Mammal information is available.The Dog pieces are gone.This is reflected in the third line of output after the user’s choice.This effect is called slicing because the Dog portions(your derived class portions) of your object were sliced off when converting to just a Mammal(the base class).This experiment is then repeated for the Cat object, with similar results.
void ValueFunction(Mammal MammalValue)
{
	MammalValue.Speak();
}

void PtrFunction(Mammal* pMammal)
{
	pMammal->Speak();
}

void RefFunction(Mammal& rMammal)
{
	rMammal.Speak();
}
//(1)dog(2)cat(0)Quit: 1
//Woof
//Woof
//Mammal Speak!
//(1)dog(2)cat(0)Quit : 2
//Meow!
//Meow!
//Mammal Speak!
//(1)dog(2)cat(0)Quit : 0







