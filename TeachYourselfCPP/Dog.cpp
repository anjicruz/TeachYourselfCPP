//Listing 11.2 Using a derived object
#include <iostream>
using namespace std;

enum  BREED { GOLDEN, CAIRN, DANDIE, SHETLAMD, DOBERMAN, LAB };
// On lines 8–28, the Mammal class is declared (all its functions are inline to save space here).
class Mammal
{
public:
	// constructors
	Mammal(): itsAge(2), itsWeight(5) {}
	~Mammal(){}

	// accessors
	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	// other methods
	void Speak() const { cout << "Mammal sound.\n"; }
	void Sleep() const { cout << "shhhhh. I'm sleeping.\n"; }

protected:
	int itsAge;
	int itsWeight;
};
// On lines 30–48, the Dog class is declared as a derived class of Mammal.Thus, by these declarations, all Dogs have an age, a weight, and a breed.As stated before, the age and weight come from the base class, Mammal.
class Dog : public Mammal // class derivedClass : accessType baseClass
{
public:

	// constructors
	Dog() :itsBreed(GOLDEN) {}
	~Dog() {}

	// accessors
	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	// other methods
	void WagTail() const { cout << "Tail wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }

private:
	BREED itsBreed;
};

// On line 52, a Dog is declared: Fido. Fido inherits all the attributes of a Mammal, as well as all the attributes of a Dog.Thus, Fido knows how to WagTail(), but he also knows how to Speak() and Sleep().On lines 53 and 54, Fido calls two of these methods from the Mammal base class.On line 55, the GetAge() accessor method from the base class is also called successfully.
int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout << "Fido is " << Fido.GetAge() << " years old." << endl;
	return 0;
}