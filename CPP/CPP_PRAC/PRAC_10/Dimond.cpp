#include <iostream>

using namespace std;

class student
{
protected:
    string Name;
    int Enrollment;

public:
    void get()
    {
        cout << "Enter your Name\n"
             << endl;
        getline(cin, Name);
        cout << "Enter your Enrollment No.\n"
             << endl;
        cin >> Enrollment;
    }
    void put()
    {
        cout << "Name : " << Name << endl;
        cout << "Enrollment no." << Enrollment << endl;
    }
};
class test : virtual public student
{
protected:
    int marks;

public:
    void get()
    {
        cout << "Enter Marks" << endl;
        cin >> marks;
    }
    void put()
    {
        cout << "Marks : " << marks << endl;
    }
};

class sport : virtual public student
{
protected:
    int sp;

public:
    void get()
    {
        cout << "Enter sport Marks" << endl;
        cin >> sp;
    }
    void put()
    {
        cout << "Marks of Sports : " << sp << endl;
    }
};

class Total_Marks : public test, public sport
{
protected:
    int sum;

public:
    void sum_()
    {
        student::get();
        student::put();
        test::get();
        test::put();
        sport::get();
        sport::put();
        sum = sp + marks;
        cout << "Sum of Marks : " << sum << endl;
    }
};
int main()
{
    Total_Marks tm;
    tm.sum_();
    return 0;
}