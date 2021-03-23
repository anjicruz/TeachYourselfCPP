// LISTING 8.3 Finding Out What Is Stored in Pointers
#include <iostream>


int main()
{
	using namespace std;
	
	unsigned short int myAge = 5, yourAge = 10;

	 // a pointer assigning pAge to myAge
	unsigned short int* pAge = &myAge;

	cout << "myAge:\t\t" << myAge
		<< "\t\tyourAge:\t" << yourAge << endl; // prints the value of the variable

	cout << "&myAge:\t\t" << &myAge
		<< "\t&yourAge:\t" << &yourAge << endl; // prints the memory address

	cout << "pAge:\t\t" << pAge
		<< "\t*pAge:\t" << *pAge << endl; // pAge = pointer that holds the value of myAge
	return 0;
}









