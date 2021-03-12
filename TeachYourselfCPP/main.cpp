//	Demonstrating the Address-of Operator
// and addresses of local variables
#include <iostream>

int main()
{	
	using std::cout; using std::endl; using std::cin;
	unsigned short shortVar = 65;
	unsigned long longVar = 65535;
	long sVar = -65535;

	cout << "shortVar:\t" << shortVar;
	cout << "\tAddress of shortVar:\t";
	cout << &shortVar << endl;

	cout << "longVar:\t" << longVar;
	cout << "\tAddress of longVar:\t";
	cout << &longVar << endl;

	cout << "sVar:\t\t" << sVar;
	cout << "\tAddress of sVar:\t";
	cout << &sVar << endl;
	
	return 0;
}
//address-of operator (&)
//Output ▼
//shortVar : 5 Address of shortVar : 0012FF7C
//	longVar : 65535 Address of longVar : 0012FF78
//	sVar : -65535 Address of sVar : 0012FF74
//		   (Your printout might look different, especially the last column.)
//	Analysis ▼
//	Three variables are declared and initialized : an unsigned short on line 8, an unsigned
//	long on line 9, and a long on line 10. Their values and addresses are printed on lines
//	12–22.You can see on lines 14, 18, and 22 that the address - of operator (&) is used to get
//	the address of the variable.This operator is simply placed on the front of the variable
//	name to have the address returned.
//	Line 12 prints the value of shortVar as 5, which is expected.In the first line of the output,
//	you can see that its address is 0012FF7C when run on a Pentium(32 - bit) computer.
//	This address is computer - specific and might change slightly each time the program is
//	run.Your results will be different.
//	What Is a Pointer ? 205
//	8
//	When you declare a variable, the compiler determines how much memory to allow based
//	on the variable type.The compiler takes care of allocating memory and automatically
//	assigns an address for it.For a long integer that is typically four bytes, for example, an
//	address to four bytes of memory is used.
//	 Pointers Explained
//	Note that your compiler might insist on assigning new variables on
//	four - byte boundaries. (Thus, longVar was assigned an address
//		four bytes after shortVar even though shortVar needed only two
//		bytes!)