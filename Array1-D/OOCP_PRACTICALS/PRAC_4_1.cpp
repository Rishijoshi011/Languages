#include <iostream>

using namespace std;

class Demo
{
    int num;

public:
    void set(int num)
    {
        this->num = num;
    }

    void get(int num)
    {
        cout << "Value of num is: " << num << endl;
        cout << "Value of num of class is: " << this->num << endl;
    }
};

int main()
{
    Demo d;
    d.set(11);
    d.get(7);
}