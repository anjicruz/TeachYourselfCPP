//	LISTING 8.5 Allocating, Using, and Deleting Pointers
#include <iostream>

int main()
{	//using std::cout; using std::endl; using std::cin;
	using namespace std;
	int localVariable = 5;
	int * pLocal = &localVariable;
	int * pHeap = new int;
	*pHeap = 7;
	cout << "localVariable: " << localVariable << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;
	pHeap = new int;
	*pHeap = 9;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;
	return 0;
}/*
Analysis ▼
Line 7 declares and initializes a local variable ironically called localVariable.Line 8
declares a pointer called pLocal and initializes it with the address of the local variable.
On line 9, a second pointer called pHeap is declared; however, it is initialized with the
result obtained from calling new int.This allocates space on the free store for an int,
which can be accessed using the pHeap pointer.This allocated memory is assigned the
value 7 on line 10.
Lines 11–13 print a few values.Line 11 prints the value of the local variable
(localVariable), line 12 prints the value pointed to by the pLocal pointer, and line 13
prints the value pointed to by the pHeap pointer.You should notice that, as expected, the
values printed on lines 11 and 12 match.In addition, line 13 confirms that the value
assigned on line 10 is, in fact, accessible.
On line 14, the memory allocated on line 9 is returned to the free store by a call to
delete.This frees the memory and disassociates the pointer from that memory.pHeap is
now free to be used to point to other memory.It is reassigned on lines 15 and 16, and
line 17 prints the result.Line 18 restores that memory to the free store.
Although line 18 is redundant(the end of the program would have returned that memory),
it is a good idea to free this memory explicitly.If the program changes or is
extended, having already taken care of this step is beneficial.*/
