// LISTING 11.5 Overriding a Base Class Method in a Derived Class
#include <iostream>
using std::cout;
// All the extra methods and data have been removed from these classes. On lines 8 and 9, the Mammal class declares the overloaded Move() methods.
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
// On line 22, Dog overrides the version of Move() with no parameters.
class Dog : public Mammal
{
public:
	void Move() const { cout << "Dog move 5 steps.\n"; }
};

// These methods are invoked on lines 30–32, and the output reflects this as executed.
int main()
{
	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Move();
	bigAnimal.Move(2);
	Fido.Move();
	// Fido.Move(10);
	return 0;
}
// Line 33, however, is commented out because it causes a compile - time error.After you override one of the methods, you can no longer use any of the base methods of the same name. So, although the Dog class could have called the Move(int) method if it had not overridden the version of Move() without parameters, now that it has done so, it must override both if it wants to use both.Otherwise, it hides the method that it doesn’t override. This is reminiscent of the rule that if you supply any constructor, the compiler no longer supplies a default constructor. The rule is this : After you override any overloaded method, all the other overrides of that method are hidden.If you want them not to be hidden, you must override them all. It is a common mistake to hide a base class method when you intend to override it by forgetting to include the keyword const. const is part of the signature; leaving it off changes the signature, and thus hides the method rather than overrides it.