#include <iostream>

using namespace std;

class Demo
{
public:
    float area(float radius)
    {
        return (3.14 * radius * radius);
    }

    float area(float length, float width)
    {
        return (length * width);
    }

    float area(double a)
    {
        return (a * a);
    }
};

int main()
{
    Demo d;

    cout << "Area of Circle: " << d.area(5.25) << endl;
    cout << "Area of Rectangle: " << d.area(5.25, 10.0) << endl;
    cout << "Area of Square: " << d.area(5.25) << endl;
}