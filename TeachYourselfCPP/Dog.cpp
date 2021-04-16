// LISTING 11.4 Overloading Constructors in Derived Classes
#include <iostream>
using namespace std;

enum  BREED { GOLDEN, CAIRN, DANDIE, SHETLAMD, DOBERMAN, LAB };

class Mammal
{
public:
	// constructors. In Listing 11.4, Mammal’s constructor has been overloaded on line 12 to take an integer, the Mammal’s age.
	Mammal();
	Mammal(int age);
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
	// Dog has overloaded five constructors on lines 36–40. The first is the default constructor. On line 37, the second constructor takes the age, which is the same parameter that the Mammal constructor takes.The third constructor takes both the age and the weight, the fourth takes the age and the breed, and the fifth takes the age, the weight, and the breed.
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
	void WagTail() const { cout << "Tail wagging...\n"; }
	void BegForFood() const { cout << "Begging for food...\n"; }

private:
	BREED itsBreed;
};

Mammal::Mammal():
itsAge(1),
itsWeight(5)
{
	std::cout << "Mammal constructor..." << std::endl;
}
// The implementation on lines 62–67 initializes itsAge with the value passed into the constructorand initializes itsWeight with the value 5.
Mammal::Mammal(int age):
itsAge(age),
itsWeight(5)
{
	std::cout << "Mammal (int) constructor..." << std::endl;
}

Mammal::~Mammal()
{
	std::cout << "Mammal destructor..." << std::endl;
}
// On line 74 is the code for Dog’s default constructor. You can see that this has something new.When this constructor is called, it in turn calls Mammal’s default constructor as you can see on line 75. Although it is not strictly necessary to do this, it serves as documentation that you intended to call the base constructor, which takes no parameters.The base constructor would be called in any case, but actually doing so makes your intentions explicit.
Dog::Dog():
Mammal(),
itsBreed(GOLDEN)
{
	std::cout << "Dog constructor..." << std::endl;
}
// The implementation for the Dog constructor, which takes an integer, is on lines 81–86. In its initialization phase(lines 82 and 83), Dog initializes its base class, passing in the parameter, and then it initializes its breed.
Dog::Dog(int age):
Mammal(age),
itsBreed(GOLDEN)
{
	std::cout << "Dog (int) constructor..." << std::endl;
}
// Another Dog constructor is on lines 88–94. This constructor takes two parameters. It again initializes its base class by calling the appropriate constructor on line 89, but this time it also assigns weight to its base class’s variable itsWeight.Note that you cannot assign to the base class variable in the initialization phase.Because Mammal does not have a constructor that takes this parameter, you must do this within the body of the Dog’s constructor.
Dog::Dog(int age, int weight):
Mammal(age),
itsBreed(GOLDEN)
{
	itsWeight = weight;
	std::cout << "Dog (int, int) constructor..." << std::endl;
}

Dog::Dog(int age, int weight, BREED breed):
Mammal(age),
itsBreed(breed)
{
	itsWeight = weight;
	std::cout << "Dog (int, int, BREED) constructor..." << std::endl;
}

Dog::Dog(int age, BREED breed):
Mammal(age),
itsBreed(breed)
{
	std::cout << "Dog (int, BREED) constructor..." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor..." << std::endl;
}
int main()
{
	Dog Fido;
	Dog rover(5);
	Dog buster(6, 8);
	Dog yorkie(3, GOLDEN);
	Dog dobbie(4, 20, DOBERMAN);
	Fido.Speak();
	rover.WagTail();
	cout << "Yorkie is " << yorkie.GetAge() << " years old." << endl;
	cout << "Dobbie weighs " << dobbie.GetWeight() << " pounds." << endl;
	return 0;
}

// Walk through the remaining constructors to be certain you are comfortable with how they work.Note what is initializedand what must wait for the body of the constructor. The output has been numbered so that each line can be referred to in this analysis.The first two lines of output represent the instantiation of Fido, using the default constructor. In the output, lines 3 and 4 represent the creation of rover.Lines 5 and 6 represent buster.Note that the Mammal constructor that was called is the constructor that takes one integer, but the Dog constructor is the constructor that takes two integers. After all the objects are created, they are usedand then go out of scope.As each object is destroyed, first the Dog destructorand then the Mammal destructor is called, five of each in total.