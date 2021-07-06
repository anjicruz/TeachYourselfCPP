﻿// Listing 11.2 Using a derived object
#include <iostream>
using std::cout;
using std::endl;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, LAB};

class Mammal
{
public:
	// constructors
	Mammal():itsAge(2), itsWeight(5){}
	~Mammal(){}

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
	Dog():itsBreed(GOLDEN){}
	~Dog(){}

	// accessors
	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	// other methods
	void WagTail() const { cout << "Tail Wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }

private:
	BREED itsBreed;
};

int main() {
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	Fido.Sleep();
	cout << "Fido is " << Fido.GetAge() << " years old." << endl;
	return 0;
}