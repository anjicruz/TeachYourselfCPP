// LISTING 10.4 Using Constructors and Destructors
// Demonstrates declaration of constructors and destructor for the Cat class
// Programmer created default constructor

#include <iostream>
// Listing 10.4 is similar to Listing 10.3, except that line 10 adds a constructor that takes an integer.Line 11 declares the destructor, which takes no parameters.Destructors never take parameters, and neither constructors nor destructors return a value—not even void.
class Cat
{
public:
	Cat(int initialAge); // constructor
	~Cat(); // destructor
	int GetAge(); // accessor function
	void SetAge(int age); // accessor function
	void Meow(); 
private: // begin private section
	int itsAge;  // member variable
};
// Lines 19–22 show the implementation of the constructor. It is similar to the implementation of the SetAge() accessor function.As you can see, the class name precedes the constructor name.As mentioned earlier, this identifies the method, Cat() in this case, as a part of the Cat class.This is a constructor, so there is no return value—not even void. This constructor does, however, take an initial value that is assigned to the data member, itsAge, on line 21.
Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}
// Lines 24–26 show the implementation of the destructor ~Cat(). For now, this function does nothing, but you must include the definition of the function if you declare it in the class declaration.Like the constructorand other methods, the destructor is preceded by the class name.Like the constructor, but differing from other methods, no return time or parameters are included.This is standard for a destructor.
Cat::~Cat()  // destructor takes no action                                
{
}

int Cat::GetAge()
{
	return itsAge;
}

void Cat::SetAge(int age)
{
	itsAge = age;
}

void Cat::Meow()
{
	std::cout << "Meow.\n";
}
// Line 45 contains the definition of a Cat object, Frisky. The value 5 is passed in to Frisky’s constructor.No need exists to call SetAge() because Frisky was created with the value 5 in its member variable itsAge, as shown on line 47. On line 49, Frisky’s itsAge variable is reassigned to 7. Line 50 prints the new value.
int main()
{
	Cat Frisky(5);
	Frisky.Meow();
	std::cout << "Frisky is a cat who is " << Frisky.GetAge() << " years old" << std::endl;
	Frisky.Meow();
	Frisky.SetAge(7);
	std::cout << "Now Frisky is " << Frisky.GetAge() << " years old" << std::endl;

	return 0;
}
