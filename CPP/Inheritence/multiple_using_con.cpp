#include <iostream>
#include <conio.h>
using namespace std;
// multiple class mathi Derived in d1 class
class Base1
{
public:
    Base1()
    {
        cout << "In base1" << endl;
        int a;
        int b;
        cout << "Enter the a" << endl;
        cin >> a;
        cout << "Enter the b" << endl;
        cin >> b;
        cout << "SUM: " << a + b << endl;
    }
    ~Base1(){};
};

class Base2
{
public:
    Base2()
    {
        cout << "In base2" << endl;
        int a;
        int b;
        cout << "Enter the a" << endl;
        cin >> a;
        cout << "Enter the b" << endl;
        cin >> b;
        cout << "SUM: " << a + b << endl;
    }
    ~Base2(){};
};

class Base3
{
public:
    Base3()
    {
        cout << "In base4" << endl;
        int a;
        int b;
        cout << "Enter the a" << endl;
        cin >> a;
        cout << "Enter the b" << endl;
        cin >> b;
        cout << "SUM: " << a + b << endl;
    }
    ~Base3(){};
};

class Derived : public Base1, public Base2, public Base3
{
};

int main()
{
    Derived d1;

    return 0;
}