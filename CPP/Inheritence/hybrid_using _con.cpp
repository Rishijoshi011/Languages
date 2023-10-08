#include <iostream>
using namespace std;
class Base1
{
public:
    Base1()
    {
        cout << "In Base1" << endl;
        int a;
        int b;
        cout << "Enter the a" << endl;
        cin >> a;
        cout << "Enter the b" << endl;
        cin >> b;
        cout << "SUM: " << a + b << endl;
    };
};
class Base2 : public Base1
{
};
class Base3
{
public:
    Base3()
    {
        cout << "In Base3" << endl;
        int a;
        int b;
        cout << "Enter the a" << endl;
        cin >> a;
        cout << "Enter the b" << endl;
        cin >> b;
        cout << "SUM: " << a + b << endl;
    };
};
class Derive : public Base2, public Base3
{
};
int main()
{
    Base2 b1;
    Derive d1;

    return 0;
}