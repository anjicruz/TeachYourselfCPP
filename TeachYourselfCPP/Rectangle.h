// Begin Rectangle.h Lines 3–14 in Rectangle.h (Listing 10.7) declare the class Point, which is used to hold a specific x - coordinate and y - coordinate on a graph.As written, this program doesn’t use Points much; however, other drawing methods require Points. LISTING 10.7 Declaring a Complete Class
#include <iostream>
struct Point // holds x,y coordinates
{
	// no constructor, uses default
public:
	void SetX(int x) { itsX = x; } // The Point class uses inline accessor functions declared on lines 7–10 to get and set the xand y points.The Points class uses the default constructor and destructor.Therefore, you must set their coordinates explicitly.
	void SetY(int y) { itsY = y; }                                                           
	int GetX()const { return  itsX; }
	int GetY()const { return  itsY; }
private:
	int itsX;
	int itsY;
}; // Within the declaration of the class Point, you declare two member variables (itsX anditsY) on lines 12 and 13. These variables hold the values of the coordinates.As the xcoordinate increases, you move to the right on the graph.As the y - coordinate increases, you move upward on the graph.Other graphs use different systems.Some windowing programs, for example, increase the y - coordinate as you move down in the window.


struct Rectangle
{  // Line 17 begins the declaration of a Rectangle class. A Rectangle consists of four points that represent the corners of the Rectangle.The constructor for the Rectangle(line 20) takes four integers, known as top, left, bottom, and right.The four parameters to the constructor are copied into four member variables(Listing 10.8), and then the four Points are established.
public:
	Rectangle(int top, int left, int bottom, int right);
	~Rectangle() {}

	int GetTop() const { return itsTop; }
	int GetLeft() const { return itsLeft; }
	int GetBottom() const { return itsBottom; }
	int GetRight() const { return itsRight; }

	Point GetUpperLeft() const { return itsUpperLeft; }
	Point GetLowerLeft() const { return itsLowerLeft; }
	Point GetUpperRight() const { return itsUpperRight; }
	Point GetLowerRight() const { return itsLowerRight; }

	void SetUpperLeft(Point Location) { itsUpperLeft = Location; }
	void SetLowerLeft(Point Location) { itsLowerLeft = Location; }
	void SetUpperRight(Point Location) { itsUpperRight = Location; }
	void SetLowerRight(Point Location) { itsLowerRight = Location; }

	void SetTop(int top) { itsTop = top; }
	void SetLeft(int left) { itsLeft = left; }
	void SetBottom(int bottom) { itsBottom = bottom; }
	void SetRight(int right) { itsRight = right; }
	// In addition to the usual accessor functions, Rectangle has a function GetArea() declaredon line 43. Instead of storing the area as a variable, the GetArea() function computes the area on lines 28 and 29 of Listing 10.8.To do this, it computes the widthand the height of the rectangle, and then it multiplies these two values.
	int GetArea() const;

private:
	Point itsUpperLeft;
	Point itsUpperRight;
	Point itsLowerLeft;
	Point itsLowerRight;
	int itsTop;
	int itsLeft;
	int itsBottom;
	int itsRight;
};
// end Rectangle.h
