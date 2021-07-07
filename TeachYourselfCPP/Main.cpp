// Listing 11.3 Constructors and destructors called.
#include <iostream>
using namespace std;
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, LAB};

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
	Dog();
	~Dog();

	// accessors
	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	// other methods
	void WagTail() const { cout << "Tail Wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }

private:
	BREED itsBreed;
};

Mammal::Mammal():
	itsAge(3),
	itsWeight(5)
{
	std::cout << "Mammal constructor..." << endl;
}

Mammal::~Mammal()
{
	std::cout << "Mammal destructor..." << endl;
}

Dog::Dog() :
	itsBreed(GOLDEN)
{
	std::cout << "Dog constructor..." << endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor..." << endl;
}
int main() {
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	Fido.Sleep();
	cout << "Fido is " << Fido.GetAge() << " years old." << endl;
	return 0;
}