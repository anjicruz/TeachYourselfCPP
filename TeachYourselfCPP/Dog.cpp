//Listing 11.12 Demonstration of Private Inheritance
#include <iostream>
using namespace std;

class ElectricMotor
{
public:
	ElectricMotor() {};
	virtual ~ElectricMotor() {};
	
public:
	void StartMotor()
	{
		Accelerate();
		Cruise();
	}
	
	void StopMotor()
	{
		cout << "Motor stopped" << endl;
	};

private:
	void Accelerate()
	{
		cout << "Motor started" << endl;
	}

	void Cruise()
	{
		cout << "Motor running at constant speed" << endl;
	}
};

class Fan : private ElectricMotor
{
public:
	Fan() {};
	~Fan() {};

	void StartFan()
	{
		StartMotor();
	}

	void StopFan()
	{
		StopMotor();
	}
};

int main()
{
	Fan mFan;

	mFan.StartFan();
	mFan.StopFan();

	/*mFan.Accelerate();
	ElectricMotor* pMotor = &mFan;*/
	return 0;
}
//Motor started
//Motor running at constant speed
//Motor stopped
//
//The preceding code is quite simple, and it demonstrates how class Fan was able to use the public methods of ElectricMotor by deriving from it, yet intentionally makes them unavailable for use for those that use objects of Fan. Lines 59 and 60 attempt to access the instance of the base class ElectricMotor via mFan. However, they cannot access any public method of the base class ElectricMotor via an instance of the derived class Fan, as the inheritance relationship between them is privateand therefore forbids such access.Those two lines, when uncommented, will result in a compile failure.