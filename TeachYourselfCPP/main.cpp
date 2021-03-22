// Listing 8.1 Demonstrates address-of operator
// and addresses of local variables
#include <iostream>

int main()
{
	using namespace std;
	unsigned short int howOld = 50;
	unsigned short int* pAge = &howOld;

	cout << pAge << endl;
	return 0;
}








