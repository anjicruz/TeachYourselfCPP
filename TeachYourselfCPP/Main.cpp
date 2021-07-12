//Listing 11.7 Calling a base method from a overridden method.
#include <iostream>
using std::cout;

class Mammal
{
public:
	void Move() const { cout << "Mammal move one step.\n"; }
	void Move(int distance) const
	{
		cout << "Mammal move ";
		cout << distance << " steps.\n";
	}
protected:
	int itsAge;
	int itsWeight;
};

class Dog :public Mammal
{
public:
	// You might receive a warning that you are hiding a function
	void Move() const;
};

void Dog::Move() const
{
	cout << "In dog move...\n";
	Mammal::Move(3);
}

int main() {
	Mammal bigAnimal;
	Dog Fido;
	Fido.Move();
	bigAnimal.Move();
	bigAnimal.Move(2);
	Fido.Mammal::Move(6);

	return 0;
}