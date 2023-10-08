#include <iostream>

using namespace std;

class Base
{
    int num;

public:
    void set(int num)
    {
        this->num = num;
    }

    int get()
    {
        return num;
    }
};

class Base2
{
    int num;
    Base &b;

public:
    Base2(Base &b) : b(b) {}

    void set(int num)
    {
        this->num = num;
    }

    int get()
    {
        return num;
    }

    friend void max(Base &b, Base2 &b2);
};

void max(Base &b, Base2 &b2)
{
    if(b.get() > b2.num){
       cout << "Maximum Value is: " << b.get() << endl;
    } else{
       cout << "Maximum Value is: " << b2.num << endl;
    }

}

int main()
{

    Base b;
    Base2 b2(b);

    b.set(6);
    b2.set(600);

    cout << "Value of Base class is: " << b.get() << endl;
    cout << "Value of Derived class is: " << b2.get() << endl;

    max(b, b2);
}