// Writing Past the End of an Array
#include <iostream>
using namespace std;

int main() 
{
	long TargetArray[25];

	int i;
	for (i = 0; i < 25; i++)
		TargetArray[i] = 10;

	cout << "\nTest 1: \n";
	cout << "TargetArray[0]: " << TargetArray[0] << endl;
	cout << "TargetArray[24]: " << TargetArray[24] << endl << endl;

	cout << "\nAttempting at assigning value beyond the upper-bound...";
	for (i = 0; i < 25; i++)
		TargetArray[i] = 20;

	cout << "\nTest 2: \n";
	cout << "TargetArray[0]: " << TargetArray[0] << endl;
	cout << "TargetArray[24]: " << TargetArray[24] << endl;
	cout << "TargetArray[25]: " << TargetArray[25] << endl << endl;

	return 0;
}