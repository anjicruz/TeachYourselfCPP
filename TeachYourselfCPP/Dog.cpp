//Listing 11.8 Using virtual methods
#include <iostream>
using std::cout;
// On line 11, Mammal is provided a virtual method: Speak(). The designer of this class thereby signals that she expects this class eventually to be another class’s base type.The derived class will probably want to override this function.
class Mammal
{
public:
	Mammal():itsAge(1) { cout << "Mammal constructor.\n"; }
	virtual ~Mammal() { cout << "Mammal destructor.\n"; }
	void Move() const { cout << "Mammal move one step.\n"; }
	virtual void Speak() const { cout << "Mammal speak!.\n"; }
	
protected:
	int itsAge;
};

class Dog : public Mammal
{
public:
	Dog() { cout << "Dog Constructor...\n"; }
	virtual ~Dog() { cout << "Dog Destructor...\n"; }
	void WagTail() { cout << "Wagging Tail...\n"; }
	void Speak() const { cout << "Woof!...\n"; }
	void Move() const { cout << "Dog moves 5 steps...\n"; }
};
// On line 29, a pointer to Mammal is created, pDog, but it is assigned the address of a new Dog object.Because a dog is a mammal, this is a legal assignment.The pointer is then used on line 30 to call the Move() function.Because the compiler knows pDog only to be a Mammal, it looks to the Mammal object to find the Move() method.On line 10, you can see that this is a standard, nonvirtual method, so the Mammal’s version is called.
// On line 31, the pointer then calls the Speak() method.Because Speak() is virtual (see line 11), the Speak() method overridden in Dog is invoked.
int main()
{
	Mammal* pDog = new Dog;
	pDog->Move();
	pDog->Speak();
	
	return 0;
}/*
Mammal constructor...
Dog Constructor...
Mammal move one step
Woof!*/
