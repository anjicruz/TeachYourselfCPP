// Relational Precedence
#include <iostream>

int main() 
{
	using std::cout; using std::endl; using std::cin;
	int x=3, y=10,z=10;
	//if (x > 5 && y > 5 || z > 5)
	if ((x > 5) && (y > 5 || z > 5))
		cout << "TRUE" << endl;
	else
		cout << "not TRUE" << endl;

	cout << endl;
	return 0;
}
