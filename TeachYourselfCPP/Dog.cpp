// LISTING 11.1 Simple Inheritance
#include <iostream>
using namespace std;

enum  BREED { GOLDEN, CAIRN, DANDIE, SHETLAMD, DOBERMAN, LAB };
// On lines 7–28, the Mammal class is declared. Note that, in this example, Mammal does not derive from any other class.In the real world, mammals do derive—that is, mammals are kinds of animals.In a C++ program, you can represent only a fraction of the information you have about any given object.Reality is far too complex to capture all of it, so every C++ hierarchy is a carefully limited representation of the data available.The trick of good design is to represent the areas that you care about in a way that maps back to reality in a reasonably faithful manner without adding unnecessary complication.
// The hierarchy has to begin somewhere; this program begins with Mammal. Because of this decision, some member variables might properly belong in a higher base class than those now represented here.Certainly all animals have an ageand weight, for example, so if Mammal is derived from Animal, you would expect to inherit those attributes.As it is, the attributes appear in the Mammal class. In the future, if another animal sharing some of these features were added(for instance, Insect), the relevant attributes could be hoisted to a newly created Animal class that would become the base class of Mammaland Insect.This is how class hierarchies evolve over time.
// To keep the program reasonably simple and manageable, only six methods have been put in the Mammal class—Speak(), Sleep(), and four accessor methods.
class Mammal
{
public:
	// constructors
	Mammal();
	~Mammal();

	// accessors
	int GetAge() const;
	void SetAge(int);
	int GetWeight() const;
	void SetWeight();

	// other methods
	void Speak() const;
	void Sleep() const;

// Every Dog object will have three member variables: itsAge, itsWeight, and itsBreed. Note that the class declaration for Dog does not include the member variables itsAgeand itsWeight.Dog objects inherit these variables from the Mammal class, along with all Mammal’s methods except the copy operator and the constructorsand destructor.
protected:
	int ItsAge;
	int ItsWeight;
};
// The Dog class inherits from Mammal, as indicated on line 32. You know Dog inherits from Mammal because of the colon following the class name(Dog), which is then followed by the base class name(Mammal).
class Dog : public Mammal // class derivedClass : accessType baseClass
{
public:

	// constructors
	Dog();
	~Dog();

	// accessors
	BREED GetBreed() const;
	void SetBreed(BREED);

	// other methods
	WagTail();
	BegForFood();

protected:
	BREED itsBreed;
};/*
Private Versus Protected
You might have noticed that a new access keyword, protected, has been introduced on
lines 25 and 46 of Listing 11.1.Previously, class data had been declared private.
However, private members are not available outside of the existing class.This privacy
even applies to prevent access from derived classes.You could make itsAgeand
itsWeight public, but that is not desirable.You don’t want other classes accessing these
data members directly.
306 LESSON 11 : Implementing Inheritance
There is an argument to be made that you ought to make all member
data private and never protected.Bjarne Stroustrup(the creator
	of C++) makes this argument in The Design and Evolution of
	C++, (ISBN 0 - 201 - 543330 - 3, Addison Wesley, 1994).Protected
	methods, however, are not generally regarded as problematic, and
	can be very useful.
	What you want is a designation that says, “Make these visible to this classand to classes
	that derive from this class.” That designation is protected.Protected data membersand
	functions are fully visible to derived classes, but are otherwise private.
	In total, three access specifiers exist : public, protected, and private.If a function has an
	object of your class, it can access all the public member dataand functions.The member
	functions, in turn, can access all private data membersand functions of their own class
	and all protected data membersand functions of any class from which they derive.Thus,
	the function Dog::WagTail() can access the private data itsBreedand can access the
	protected data of itsAgeand itsWeight in the Mammal class.
	NOTE
	Even if other classes are layered between Mammaland Dog(for example,
		DomesticAnimals), the Dog class will still be able to access the protected members of
	Mammal, assuming that these other classes all use public inheritance.Private inheritance is
	discussed later in this lesson.*/ 