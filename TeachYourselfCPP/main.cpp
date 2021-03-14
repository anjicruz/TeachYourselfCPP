//	LISTING 8.3 Finding Out What Is Stored in Pointers
#include <iostream>


int main()
{	//using std::cout; using std::endl; using std::cin;
	using namespace std;

	unsigned short int myAge = 5, yourAge = 10;

	// a pointer
	unsigned short int * pAge = &myAge;

	cout << "myAge:\t" << myAge 
		<< "\t\tyourAge:  " << yourAge << endl;

	cout << "&myAge: " << &myAge
		<< "\t&yourAge:  " << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;
	cout << "*pAge:\t" << *pAge << endl;


	cout << "\nReassigning: pAge = &yourAge..." << endl << endl;
	pAge = &yourAge; // reassign the pointer

	cout << "myAge:\t" << myAge
		<< "\t\tyourAge:  " << yourAge << endl;

	cout << "&myAge: " << &myAge
		<< "\t&yourAge:  " << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;
	cout << "*pAge:\t" << *pAge << endl;

	cout << "\n&pAge:\t" << &pAge << endl;
	
	return 0;
}/*
Output ▼
myAge : 5 yourAge : 10
	& myAge : 0012FF7C &yourAge : 0012FF78
	pAge : 0012FF7C
	*pAge : 5
	Reassigning : pAge = &yourAge...
	myAge : 5 yourAge : 10
	& myAge : 0012FF7C &yourAge : 0012FF78
	pAge : 0012FF78
	*pAge : 10
	& pAge : 0012FF74
	(Your output might look different.)

	Analysis ▼
	On line 9, myAge and yourAge are declared to be variables of type unsigned short integer.
	On line 12, pAge is declared to be a pointer to an unsigned short integer, and it is
	initialized with the address of the variable myAge.
	Lines 14–18 print the values and the addresses of myAge and yourAge.Line 20 prints the
	contents of pAge, which is the address of myAge.You should notice that the output confirms
	that the value of pAge matches the value of myAge’s address.Line 21 prints the
	result of dereferencing pAge, which prints the value at pAge—the value in myAge, or 5.
	This is the essence of pointers.Line 20 shows that pAge stores the address of myAge, and
	line 21 shows how to get the value stored in myAge by dereferencing the pointer pAge.Be
	certain that you understand this fully before you go on.Study the code and look at the
	output.
	On line 25, pAge is reassigned to point to the address of yourAge.The values and
	addresses are printed again.The output shows that pAge now has the address of the variable
	yourAge and that dereferencing obtains the value in yourAge.
	Line 36 prints the address of pAge itself.Like any variable, it has an address, and that
	address can be stored in a pointer. (Assigning the address of a pointer to another pointer
		will be discussed shortly.)*/
