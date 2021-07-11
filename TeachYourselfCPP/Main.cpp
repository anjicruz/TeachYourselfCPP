// LISTING 11.4 Overloading Constructors in Derived Classes
#include <iostream>
using std::cout;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	// constructors
	Mammal() { cout << "Mammal constructor...\n"; }
	~Mammal() { cout << "Mammal destructor...\n"; }
	
	// other methods
	void Speak() const { cout << "Mammal Sound!\n"; }
	void Sleep() const { cout << "Shhh. I'm sleeping.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog :public Mammal
{
public:
	// constructors
	Dog() { cout << "Dog constructor...\n"; }
	~Dog() { cout << "Dog destructor...\n"; }
	
	// other methods
	void WagTail() const { cout << "Tail Wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }
	void Speak() const { cout << "Woof!\n"; }

private:
	BREED itsBreed;
};


int main() {
	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Speak();
	Fido.Speak();
	return 0;
}