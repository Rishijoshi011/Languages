#include <iostream>

using namespace std;

class shape
{
protected:
    int Dimension_one;

public:
    virtual float area() = 0;
};

class rectangle : public shape
{
protected:
    int Dimension_two;

public:
    void get()
    {
        cout << "Enter Dimensions for rectangle" << endl;
        cin >> Dimension_one >> Dimension_two;
    }
    float area()
    {
        cout << "Area of rectangle : " << Dimension_one * Dimension_two << endl;
    }
};

class triangle : public shape
{
protected:
    int Dimension_two;

public:
    void get()
    {
        cout << "Enter Dimensions for triangle" << endl;
        cin >> Dimension_one >> Dimension_two;
    }
    float area()
    {
        cout << "Area of triangle : " << (Dimension_one * Dimension_two) / 2 << endl;
    }
};

int main()
{
    rectangle rect;
    triangle tri;

    rect.get();
    rect.area();

    tri.get();
    tri.area();    
}