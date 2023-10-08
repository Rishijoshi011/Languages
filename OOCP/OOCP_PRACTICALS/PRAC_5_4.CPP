#include <iostream>

using namespace std;

class Calander
{
    int day, month, year;

public:
    Calander() : day(0), month(0), year(0) {}
    Calander(int day, int month, int year) : day(day), month(month), year(year) {}

    void addDays(int day, int month, int year)
    {
        int newDay = this->day + day;
        int newMonth = this->month + month;
        int newYear = this->year + year;

        if (newDay > 30)
        {
            newDay -= 30;
            newMonth++;
        }
        if (newMonth > 12)
        {
            newMonth -= 12;
            newYear++;
        }
        this->day = newDay;
        this->month = newMonth;
        this->year = newYear;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Calander cal(25, 11, 2005);

    cal.addDays(10, 3, 10);
    cal.display();

    return 0;
}