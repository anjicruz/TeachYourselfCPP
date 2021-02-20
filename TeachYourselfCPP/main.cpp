#include <iostream>

int main() 
{
	using std::cout;
	cout << "The size if an int:\t\t" << sizeof(int) << "bytes.\n";
	cout << "The size if a short int is:\t" << sizeof(short) << " bytes.\n";
	cout << "The size if a long int is:\t" << sizeof(long) << " bytes.\n";
	cout << "The size if a char is:\t\t" << sizeof(char) << " bytes.\n";
	cout << "The size if a float is:\t\t" << sizeof(float) << " bytes.\n";
	cout << "The size if a double is:\t" << sizeof(double) << " bytes.\n";
		cout << "The size if a bool is:\t\t" << sizeof(bool) << " bytes.\n";
		
	return 0;
}