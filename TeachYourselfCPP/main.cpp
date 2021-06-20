// LISTING 13.5 Using Conversion Operators to Convert a CDate into an Integer
#include <iostream>
class CDate
{
private:
    int m_nDay;   // range 1-30
    int m_nMonth; // range 1-12
    int m_nYear;

public:
    // constructor that initializes the object to a day, month and year
    CDate(int nDay, int nMonth, int nYear)
        : m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear) {};

    // Convert date object into an integer
    operator int()
    {
        return ((m_nYear * 10000) + (m_nMonth * 100) + m_nDay);
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

    int nDate = mDate;
    std::cout << "The integer equivalent of the date is: " << nDate;
    return 0;
}