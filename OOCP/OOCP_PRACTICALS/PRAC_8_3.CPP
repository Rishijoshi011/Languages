#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called!" << endl;
    }

    ~Base()
    {
        cout << "Base Destructor called!" << endl;
    }

    virtual void show() = 0; 
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 constructor called!" << endl;
    }

    ~Base2()
    {
        cout << "Base2 Destructor called!" << endl;
    }
};

class Derived : public Base, public Base2
{
public:
    Derived()
    {
        cout << "Derived constructor called!" << endl;
    }

    ~Derived()
    {
        cout << "Derived Destructor called!" << endl;
    }

    void show() 
    {
        cout << "Derived's show() called!" << endl;
    }
};

int main()
{
    Derived d;
    d.show(); 
    return 0;
}
