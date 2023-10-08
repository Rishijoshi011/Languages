#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
    double length, width;

public:
    void set(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    virtual void displayArea() = 0;
};

class Triangle : public Shape
{
public:
    void displayArea()
    {
        cout << "Area of Triangle: " << (length * width) / 2 << endl;
    }
};

class Rectangle : public Shape
{
public:
    void displayArea()
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main(){
    Triangle tre;
    Rectangle rec;

    tre.set(10.25, 5.75);
    rec.set(10.25, 5.75);

    tre.displayArea();
    rec.displayArea();

    return 0;
}