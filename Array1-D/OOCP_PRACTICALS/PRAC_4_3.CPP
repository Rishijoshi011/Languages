#include <iostream>

using namespace std;

class demo
{
    int a;

public:
    void set(int a)
    {
        this->a = a;
    }

    int get()
    {
        return a;
    }
};

int main()
{
    demo d;
    demo *ptr_obj = &d;
    void (demo::*ptr_set)(int) = demo::set;
    int (demo::*ptr_get)() = demo::get;

    (ptr_obj->*ptr_set)(11);
    cout << (ptr_obj->*ptr_get)() << endl;

    return 0;
}