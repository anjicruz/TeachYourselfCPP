// LISTING 11.4 Overloading Constructors in Derived Classes
#include <iostream>
using namespace std;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	// constructors
	Mammal();
	Mammal(int age);
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
	Dog(int age);
	Dog(int age, int weight);
	Dog(int age, BREED breed);
	Dog(int age, int weight, BREED breed);
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
	itsAge(1),
	itsWeight(5)
{
	std::cout << "Mammal constructor..." << endl;
}

Mammal::Mammal(int age) :
	itsAge(age),
	itsWeight(5)
{
	std::cout << "Mammal (int) constructor..." << endl;
}

Mammal::~Mammal()
{
	std::cout << "Mammal destructor..." << endl;
}

Dog::Dog() :
	Mammal(),
	itsBreed(GOLDEN)
{
	std::cout << "Dog constructor..." << endl;
}

Dog::Dog(int age) :
	Mammal(age),
	itsBreed(GOLDEN)
{
	std::cout << "Dog (int) constructor..." << endl;
}

Dog::Dog(int age, int weight) :
	Mammal(age),
	itsBreed(GOLDEN)
{
	itsWeight = weight;
	std::cout << "Dog (int, int) constructor..." << endl;
}

Dog::Dog(int age, int weight, BREED breed) :
	Mammal(age),
	itsBreed(GOLDEN)
{
	itsWeight = weight;
	std::cout << "Dog (int, int, BREED) constructor..." << endl;
}

Dog::Dog(int age, BREED breed) :
	Mammal(age),
	itsBreed(breed)
{
	std::cout << "Dog (int, BREED) constructor..." << endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor..." << endl;
}
int main() {
	Dog Fido;
	Dog rover(5);
	Dog buster(6, 8);
	Dog yorkie(3, GOLDEN);
	Dog dobbie(4, 20, DOBERMAN);
	Fido.Speak();
	Fido.WagTail();
	cout << "Yorkie is " << yorkie.GetAge() << " years old" << endl;
	cout << "Dobbie weighs " << dobbie.GetWeight() << " pounds" << endl;
	return 0;
}