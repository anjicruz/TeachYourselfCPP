// LISTING 11.3 Constructors and Destructors Called
#include <iostream>
using namespace std;

enum  BREED { GOLDEN, CAIRN, DANDIE, SHETLAMD, DOBERMAN, LAB };
class Mammal
{
public:
	// constructors
	Mammal();
	~Mammal();

	// accessors
	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	// other methods
	void Speak() const { cout << "Mammal sound.\n"; }
	void Sleep() const { cout << "Shhhhh. I'm sleeping.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal // class derivedClass : accessType baseClass
{
public:

	// constructors
	Dog();
	~Dog();

	// accessors
	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	// other methods
	void WagTail() const { cout << "Tail wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }

private:
	BREED itsBreed;
};
// Listing 11.3 is like Listing 11.2, except that on lines 48–69 the constructors and destructors now print to the screen when called.Mammal’s constructor is called, and then Dog’s. At that point, the Dog fully exists, and its methods can be called.
Mammal::Mammal():
itsAge(3),
itsWeight(5)
{
	std::cout << "Mammal constructor..." << std::endl;
}

Mammal::~Mammal()
{
	std::cout << "Mammal destructor..." << std::endl;
}

Dog::Dog():
itsBreed(GOLDEN)
{
	std::cout << "Dog constructor..." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor..." << std::endl;
}
int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout << "Fido is " << Fido.GetAge() << " years old." << endl;
	return 0;
}
// When Fido goes out of scope, Dog’s destructor is called, followed by a call to Mammal’s destructor.You see that this is confirmed in the output from the listing.