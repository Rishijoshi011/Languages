#include <iostream>
#include <string>

using namespace std;

class Vehical
{
protected:
    int vehicalNo, chassisNo, price;
    string company;

public:
    Vehical(int vehicalNo, int chassisNo, int price) : vehicalNo(vehicalNo), chassisNo(chassisNo), price(price) {}

    virtual void get() = 0;
};

class Scotter : public Vehical
{
    int wheels;

public:
    Scotter(int vehicalNo, int chassisNo, int price, int wheels) : Vehical(vehicalNo, chassisNo, price), wheels(wheels) {}

public:
    void get()
    {
        cout << "vehical No: " << vehicalNo << endl;
        cout << "Chassis No: " << chassisNo << endl;
        cout << "Price: $" << price << endl;
        cout << "Wheels: " << wheels << endl;
    }
};

int main()
{
    Scotter sc(22, 11, 10000, 2);
    sc.get();

    return 0;
}