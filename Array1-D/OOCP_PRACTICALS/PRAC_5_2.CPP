#include <iostream>

using namespace std;

class Demo
{
    float num;

public:
    void set(float num)
    {
        this->num = num;
    }

    float get()
    {
        return num;
    }
};

class Demo2
{
    float num;

public:
    void set(float num)
    {
        this->num = num;
    }

    float get()
    {
        return num;
    }
};

class Demo3
{
    float num;
    Demo &d;
    Demo2 &d2;

public:
    Demo3(Demo &d, Demo2 &d2) : d(d), d2(d2) {}

    void set(float num)
    {
        this->num = num;
    }

    float get()
    {
        return num;
    }

    friend float avg(Demo &d, Demo2 &d2, Demo3 &d3);
};

float avg(Demo &d, Demo2 &d2, Demo3 &d3)
{
    return ((d.get() + d2.get() + d3.num) / 3);
}

int main()
{
    Demo d;
    Demo2 d2;
    Demo3 d3(d,d2);

    d.set(100.25);
    d2.set(50.75);
    d3.set(250.12);
    
    cout << "Avg is: " << avg(d, d2, d3) << endl;

    return 0;
}