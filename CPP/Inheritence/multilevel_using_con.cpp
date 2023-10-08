
// publice Derive mode
#include <iostream>
#include <conio.h>
using namespace std;

class Demo
{
    // Base Class
public:
    int a;
    void get()
    {
        cout << "In Demo class" << endl;
        cout << endl;
        cout << "Enter the number you wont to insert" << endl;
        cin >> a;
    }
    void put()
    {
        cout << "Your Entered  number is " << a << endl;
        cout << endl;
    }
    Demo()
    {
        get();
        put();
    };
};

// Creating Derived class

class Derive : public Demo // This class derive publice member of base (Demo) class
{
public:
    void
    get_Drive()
    {
        cout << "In Derive" << endl;
        cout << endl;
        cout << "Enter the number you wont to insert" << endl;
        cin >> a;
    }

    void put_Drive()
    {
        cout << "In Derive" << endl;
        cout << "Your Entered  number is " << a << endl;
        cout << endl;
    }
    Derive()
    {
        get_Drive();
        put_Drive();
    };
};
class Derive2 : public Derive // This class derive publice member of base (Demo) class
{
};

int main()
{

    Derive2 D2;

    return 0;
}