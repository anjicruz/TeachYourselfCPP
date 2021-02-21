#include <iostream>

int main() 
{
	using std::cout;
	using std::endl;
	for (int i = 32; i < 128; i++)
		cout << (char)i;
	return 0;
}