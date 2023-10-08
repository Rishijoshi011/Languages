#include <iostream>

using namespace std;

class base
{
    int m, b;

public:
    virtual void put(int m, int b)
    {
        cout << "Hello from base class" << endl;
    }
};

class derived : public base
{
    int m, b;

public:
    void put(int m, int b)
    {
        cout << "sum is : " << m - b << endl;
    }
};

class derived2 : public base
{
    int m, b;

public:
    void put()
    {
        cout << "sum is : " << m + b << endl;
    }
};

int main()
{
    derived d;
    derived d2;
    base *bptr;
    int choice;

    do
    {
        cout << "\n\t 1.Substraction \n\t 2.Addition \n\t 3.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            bptr = &d2;
            bptr->put(6, 5);
            break;

        case 2:
            bptr = &d;
            bptr->put(15, 4);
            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "ENTER VALID CHOICE" << endl;
            break;
        }
    } while (choice != 3);
}