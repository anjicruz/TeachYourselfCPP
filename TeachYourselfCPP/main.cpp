// LISTING 13.1 A Calendar Class That Handles Day, Month and Year, and Allows Increments in Days
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

		{
			if (m_nDay > 30)
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

			m_nMonth %= 12;  // rollover dec -> jan
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

	// unary increment operator(prefix)
	CDate& operator ++ ()
	{
		AddDays(1);
		return *this;
	}

	// postfix 
	CDate operator ++ (int)
	{

		CDate mReturnDate(m_nDay, m_nMonth, m_nYear);

		AddDays(1);
		// IncrementDay();

		return mReturnDate;
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

	++mDate;

	std::cout << "Date after prefix increment is: ";

	mDate.DisplayDate();
	std::cout << std::endl;
	return 0;
}