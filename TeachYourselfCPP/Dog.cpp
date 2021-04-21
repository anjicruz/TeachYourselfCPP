// LISTING 11.7 Calling a Base Method from a Overridden Method
#include <iostream>
using std::cout;

class Mammal
{
public:
	void Move() const { cout << "Mammal move one step.\n"; }
	void Move(int distance) const
	{
		cout << "Mammal move " << distance << " steps.\n";
	}
protected:
	int itsAge;
	int itsWeight;
};



class Dog : public Mammal
{
public:
	void Move() const;
};

void Dog::Move() const
{
	cout << "In dog move...\n";
	Mammal::Move(3);
}
// On line 34, a Mammal, bigAnimal, is created, and on line 35, a Dog, Fido, is created. The method call on line 36 invokes the Move() method of Mammal, which takes an integer.
// The programmer wanted to invoke Move(int) on the Dog object, but had a problem. Dog overrides the Move() method with no parameters, but does not overload the method that takes an integer—it does not provide a version that takes an integer.This is solved by the explicit call to the base class Move(int) method on line 37.
int main()
{
	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Move(2);
	Fido.Mammal::Move(6);
	Fido.Move(); // I added this line to test. See the last 2 lines of the output
	return 0;
}/*
Mammal move 2 steps.
Mammal move 6 steps.
In dog move...
Mammal move 3 steps.*/
