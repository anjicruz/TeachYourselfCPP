// Writing Past the End of an Array
#include <iostream>
using namespace std;

int main() 
{
	enum WeekDays { Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek };
	int ArrayWeek[DaysInWeek] = { 10,20,30,40,50,60,70 };

	std::cout << "The value of Tuesday is: " << ArrayWeek[Tue]<< endl;
	return 0;
}