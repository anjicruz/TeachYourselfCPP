//	LISTING 8.4 Array Pointer Relationship
#include <iostream>
const int ARRAY_LENGTH = 5;
int main()
{	//using std::cout; using std::endl; using std::cin;
	using namespace std;

	// an array of 5 integers initialized to 5 values
	int Numbers[ARRAY_LENGTH] = { 0,100,200,300,400 };
	// pInt points to the first element
	const int *pInt = Numbers;

	cout << "Using a pointer to print the contents of an array: " << endl;

	for (int nIndex = 0; nIndex < ARRAY_LENGTH; ++nIndex)
		cout << "Element[" << nIndex << "]=" << pInt[nIndex] << endl; // *(pInt + nIndex) << endl;

	return 0;
}	/*	Output ▼
		Using a pointer to print the contents of the array:
		Element[0] = 0
		Element[1] = 100
		Element[2] = 200
		Element[3] = 300
		Element[4] = 400
		214 LESSON 8: Pointers Explained
		Analysis ▼
		We created an array of five integers called Numbers and accessed its elements using the
		pointer pInt.Because an array name(Numbers in our case) is a pointer to the first element,
		pInt does just the same.Thus(pInt + 1) is a pointer to the second element, (pInt
			+ 2) is a pointer to the third element, and so on.Dereferencing these pointers helps fetch
		the values being pointed at.So, *pInt returns the first value, *(pInt + 1) the second
		value, and so on.
		The preceding example indicates the similarity between pointers and arrays.In fact, in
		line 16, we could have simply used pInt[nIndex] instead of *(pInt + nIndex) and
		still received the same output.*/
