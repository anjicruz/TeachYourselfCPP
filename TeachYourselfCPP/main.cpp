// Using strncpy()
#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	const int MaxLength = 80;
	char String1[] = "No man is an island";
	char String2[MaxLength+1] = { '\0' };

	strncpy_s(String2, String1, MaxLength); // safer than strcpy

	cout << "String1: " << String1 << endl;
	cout << "String2: " << String2 << endl;

	return 0;
}
