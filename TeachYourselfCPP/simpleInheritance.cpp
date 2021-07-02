// LISTING 10.7 Declaring a Complete Class
#include<iostream>
using namespace std;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

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
	void Speak()const;
	void Sleep()const;


protected:
	int itsAge;
	int itsWeight;
};

class Dog :public Mammal
{
public:

	// constructors
	Dog();
	~Dog();

	// accessors
	BREED GetBreed() const;
	void setBreed(BREED);

	// other methods
	WagTail();
	BegForFood();

protected:
	BREED itsBreed:
};

//int main()
//{
//
//	return 0;
//}


