// demonstrates the use of function prototypes

#include <iostream>
int Area(int length, int width);

int main() 
{
	using std::cout; using std::endl; using std::cin;


	int lengthOfYard{ 0 };
	int widthOfYard{ 0 };
	int areaOfYard{ 0 };

	cout << "\nHow wide is your yard? ";
	cin >> widthOfYard;
	cout << "\nHow long is your yard? ";
	cin >> lengthOfYard;

	areaOfYard = Area(lengthOfYard, widthOfYard);

	cout << "Your yard is ";
	cout << areaOfYard;
	cout << " square feet.\n\n";
	return 0;
}

int Area(int len, int wid)
{
	return len * wid;
}

//The prototype for the Area() function is on line 4. Compare the prototype with the definition
//of the function on line 28. Note that the name, the return type, and the parameter
//types are the same.If they were different, a compiler error would have been generated.
//In fact, the only required difference is that the function prototype ends with a semicolon
//and has no body.
//Also note that the parameter names in the prototype are length and width, but the parameter
//names in the definition are len and wid.As discussed, the names in the prototype
//are not used; they are there as information to the programmer.It is good programming
//practice to match the prototype parameter names to the implementation parameter names,
//but as this listing shows, this is not required.
//The arguments are passed in to the function in the order in which the parameters are
//declared and defined, but no matching of the names occurs.Had you passed in
//widthOfYard, followed by lengthOfYard, the FindArea() function would have used the
//value in widthOfYard for length and lengthOfYard for width.