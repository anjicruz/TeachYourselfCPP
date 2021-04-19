// LISTING 11.5 Overriding a Base Class Method in a Derived Class
#include <iostream>
using namespace std;

enum  BREED { GOLDEN, CAIRN, DANDIE, SHETLAMD, DOBERMAN, LAB };

class Mammal
{
public:
	// constructors
	Mammal() { cout << "Mammal constructor...\n"; }
	~Mammal() { cout << "Mammal destructor...\n"; }

	// other methods Looking at the Mammal class, you can see a method called Speak() defined on line 15.
	void Speak() const { cout << "Mammal sound.\n"; }
	void Sleep() const { cout << "Shhhhh. I'm sleeping.\n"; }
	

protected:
	int itsAge;
	int itsWeight;
};
// The Dog class declared on lines 23–37 inherits from Mammal (line 24), and, therefore, has access to this Speak() method.The Dog class, however, overrides this method on line 33, causing Dog objects to say Woof! when the Speak() method is called.
class Dog : public Mammal // class derivedClass : accessType baseClass
{
public:
	Dog() { cout << "Dog constructor...\n"; }
	~Dog() { cout << "Dog destructor...\n"; }

	// Other methods
	void WagTail() const { cout << "Tail Wagging...\n"; }
	void BegForFood() const { cout << "Begging for Food...\n"; }
	void Speak() const { cout << "Woof!\n"; }
	
private:
	BREED itsBreed;
};
// On line 44, the Mammal object calls its Speak() method; then on line 45, the Dog object calls its Speak() method.The output reflects that the correct methods were called.The bigAnimal made a mammal sound and Fido woofed.Finally, the two objects go out of scopeand the destructors are called.

int main()
{
	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Speak();
	Fido.Speak();
	return 0;
}/*
Output ▼
Mammal constructor...
Mammal constructor...
Dog constructor...
Mammal sound!
Woof!
Dog destructor...
Mammal destructor...
Mammal destructor...*/
