// LISTING 10.8 Begin Rect.cpp
#include "Rectangle.h"
Rectangle::Rectangle(int top, int left, int bottom, int right)
{
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;
	// Getting the x-coordinate of the upper-left corner of the rectangle requires that you access the UpperLeft point and ask that point for its x value.Because GetUpperLeft() is a method of Rectangle, it can directly access the private data of Rectangle, including itsUpperLeft.Because itsUpperLeft is a Point and Point’s itsX value is private, GetUpperLeft() cannot directly access this data.Rather, it must use the public accessor function GetX() to obtain that value.
	itsUpperLeft.SetX(left);
	itsUpperLeft.SetY(top);

	itsUpperRight.SetX(right);
	itsUpperRight.SetY(top);

	itsLowerLeft.SetX(left);
	itsLowerLeft.SetY(bottom);

	itsLowerRight.SetX(right);
	itsLowerRight.SetY(bottom);
}


// compute the area of the rectangle by finding sides,
// esablish width and height and then multiply
int Rectangle::GetArea() const
{
	int Width = itsRight - itsLeft;
	int Height = itsTop - itsBottom;
	return (Width * Height);
}

int main()
{
	// initialize a local Rectangle variable
	Rectangle MyRectangle(100, 20, 50, 80);

	int Area = MyRectangle.GetArea();

	std::cout << "Area: " << Area << "\n";
	std::cout << "Upper Left X Coordinate: ";
	std::cout << MyRectangle.GetUpperLeft().GetX();
	return 0;
}










