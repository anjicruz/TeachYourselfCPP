// Listing 13.3: How smart pointers that simulate normal pointer semantics
#include <memory>
#include <iostream>
using namespace std;

class Dog
{
public:
	Dog() {};
	~Dog() {};

	void Bark()
	{
		cout << "Bark! Bark!" << endl;
	}
};

int main()
{
	auto_ptr<int> pSmartIntPtr(new int);
	*pSmartIntPtr = 25;
	cout << "*pSmartIntPtr = " << *pSmartIntPtr << endl;
	auto_ptr// LISTING 13.6 Calendar Class Featuring the Binary Addition Operator
#include <iostream>
		class CDate
	{
	private:
		int m_nDay; // range 1-30
		int m_nMonth; // range 1-12
		int m_nYear;

		void AddDays(int nDaysToAdd)
		{
			m_nDay += nDaysToAdd;

			if (m_nDay > 30)
			{
				AddMonths(m_nDay / 30);

				m_nDay %= 30;
			}
		}

		void AddMonths(int nMonthsToAdd)
		{
			m_nMonth += nMonthsToAdd;

			if (m_nMonth > 12)
			{
				AddYears(m_nMonth / 12);

				m_nMonth %= 12;
			}
		}

		void AddYears(int m_nYearsToAdd)
		{
			m_nYear += m_nYearsToAdd;
		}

	public:

		// constructor that initializes the object to a day, month and year
		CDate(int nDay, int nMonth, int nYear)
			: m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear) {};

		CDate operator + (int nDaysToAdd)
		{
			CDate newDate(m_nDay, m_nMonth, m_nYear);
			newDate.AddDays(nDaysToAdd);
			return newDate;
		}
		void DisplayDate()
		{
			std::cout << m_nDay << " / " << m_nMonth << " / " << m_nYear;
		}
	};

	int main()
	{

		CDate mDate(25, 6, 2008);

		std::cout << "The date object is initialized to: ";

		mDate.DisplayDate();
		std::cout << std::endl;

		std::cout << "Date after adding 10 days is: ";

		CDate datePlus10(mDate + 10);
		datePlus10.DisplayDate();
		return 0;
	}
	<Dog> pSmartDog(new Dog);
	pSmartDog->Bark();

	return 0;
}
