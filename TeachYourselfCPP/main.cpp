//	LISTING 8.7 Creating a Stray Pointer

typedef unsigned short int USHORT;
#include <iostream>

int main()
{	using std::cout; using std::endl; using std::cin;
	USHORT *pInt = new USHORT;
	*pInt = 10;
	cout << "*pInt: " << *pInt << endl;
	delete pInt;

	long * pLong = new long;
	*pLong = 90000;
	cout << "*pLong: " << *pLong << endl;

	*pInt = 20; // uh oh, this was deleted

	cout << "*pInt: " << *pInt << endl;
	cout << "*pLong: " << *pLong << endl;
	delete pLong;
	return 0;
}
