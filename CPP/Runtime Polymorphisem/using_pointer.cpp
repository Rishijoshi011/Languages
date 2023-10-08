#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    void display()
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    virtual void display()
    {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass obj_base;
    DerivedClass obj_derived;
    void (DerivedClass::*fptr)() = &DerivedClass::display;
    (obj_derived.*fptr)();
    return 0;
}