// Using strcpy()
#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char String1[] = "No man is an island";
	char String2[80] = { '\0' };

	strcpy(String2, String1);

	cout << "String1: " << String1 << endl;
	cout << "String2: " << String2 << endl;

	return 0;
}
error: This function or variable may be unsafe.Consider using safe - version instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.