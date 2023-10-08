#include <iostream>
using namespace std;
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
    };
};
class Derived1 : public Base1
{

};
class Derived2 : public Base1
{

};

int main()
{
    Derived1 d1;
    Derived2 d2;

    return 0;
}