#include <iostream>

using namespace std;

class Demo
{
    int num;

public:
    int get()
    {
        return num;
    }

    void set(int num)
    {
        this->num = num;
    }
};

class Demo2
{
    int num;
    Demo &d; // passing reference of the object we will interact with it not with the copy of it that's why we need reference

public:
    Demo2(Demo &d) : d(d) {}  // by this constructor refrence of object that is used in main will come from
    void set(int num)
    {
        this->num = num;
    }
    void swap(Demo &d, Demo2 &d2) // as we know we need to manipulate with actual value so we have to pass reference of objs.
    {
        int temp = d.get();
        d.set(d2.num);
        d2.num = temp;
    }

    void display()
    {
        cout << "Value of demo is: " << d.get() << endl;
        cout << "Value of demo2 is: " << num << endl;
    }
};

int main()
{
    Demo d;
    Demo2 d2(d);

    d.set(11);
    d2.set(7);
    d2.display();
    d2.swap(d, d2);
    d2.display();

    return 0;
}