// Relational Precedence exercise 2
#include <iostream>

int main() 
{
	using std::cout; using std::endl; using std::cin;
	int a, b, c;
	cout << "Please enter three numbers: \n";
	cout << "a: ";
	cin >> a;
	cout << "\nb: ";
	cin >> b;
	cout << "\nc: ";
	cin >> c;
	if (c = (a - b))
		cout << "a: " << a << " minus b: " << b << " equals c: " << endl;
	return 0;
}

