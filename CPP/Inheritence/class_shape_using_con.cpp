#include <iostream>
using namespace std;

class shape
{
protected:
    int D1 = 0;

public:
    virtual float area() = 0;
};
class rectangal : public shape
{
protected:
    int D2;

public:
    void get()
    {
        cout << "Enter D1 for rectangal" << endl;
        cin >> D1;
        cout << "Enter D2 for rectangal" << endl;
        cin >> D2;
    }
    float area()
    {
        return (D1 * D2);
    }
};
class triengle : public shape
{

    int D2 = 0;

public:
    void get()
    {
        cout << "Enter D1 for triengle" << endl;
        cin >> D1;
        cout << "Enter D2 for triengle" << endl;
        cin >> D2;
    }
    float area()
    {
        return ((D1 * D2) / 2);
    }
};
int main()
{

    rectangal a1;
    triengle a2;

    a2.get();
    a1.get();
    cout << "area for triengle = " << a2.area() << endl;
    cout << "area for rectangle= " << a1.area() << endl;

    return 0;
}