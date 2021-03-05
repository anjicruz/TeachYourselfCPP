// A Demonstration of Default Parameter Values
#include <iostream>


int AreaCube(int length, int width = 25, int height = 1);

int main() 
{	using std::cout; using std::endl; using std::cin;
	int length = 100;
	int width = 50;
	int height = 2;
	int area;

	area = AreaCube(length, width, height);
	cout << "First area equals: " << area << endl;

	area = AreaCube(length, width);
	cout << "Second time area equals: " << area << endl;

	area = AreaCube(length);
	cout << "Third time area equals: " << area << endl;
	return 0;
}

int AreaCube(int length, int width, int height)
{
	return(length* width* height);
}