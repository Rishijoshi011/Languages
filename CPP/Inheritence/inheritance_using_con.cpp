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
        cout << "Enter the number you wont to insert" << endl;
        cin >> a;
    }
    void put()
    {
        cout << "Your Entered  number is " << a << endl;
    }
    Demo()
    {
        get();
        put();
    };
    ~Demo(){

    };
};

// Creating Derived class

class Derive : public Demo // This class derive publice member of base (Demo) class
{
};

int main()
{
    Derive Dr;
    return 0;
}