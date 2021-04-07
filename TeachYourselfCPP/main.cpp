// 9.12 Returning a Reference to a Nonexistent Object
#include <iostream>
int& GetInt();

int main()
{
	int& rInt = GetInt();
	std::cout << "rInt= " << rInt << std::endl;
	return 0;
}
int & GetInt()
{
	int nLocalInt = 25;
	return nLocalInt;
}/*
Returning Out - of - Scope Object References
After C++ programmers learn to pass by reference, they have a tendency to go hog - wild.
It is possible, however, to overdo it. Remember that a reference is always an alias to
some other object.If you pass a reference into or out of a function, be certain to ask
yourself, “What is the object I’m aliasing, and will it still exist every time it’s used ? ”
Listing 9.12 illustrates the danger of returning a reference to an object that no longer
exists.*/

//
//Output ▼
//Compile error : Attempting to return a reference to a local object!
// rInt = -858993460
//
//This program won’t compile on the Borland compiler.It will compile
//on Microsoft compilers, perhaps with warnings; however, it
//should be noted that it is a poor coding practice.
//
//The body of GetInt() declares a local object of type int and initializes its value to 25. It
//then returns that local object by reference.Some compilers are smart enough to catch
//this error and don’t let you run the program.Others let you run the program, with unpredictable
//results.
//When GetInt() returns, the local object, nLocalInt, is destroyed(painlessly, I assure
//	you).The reference returned by this function is an alias to a nonexistent object, and this
//	is a bad thing.

