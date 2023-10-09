#include <iostream>

using namespace std;

class Cordinates
{
    int x, y;

public:
    Cordinates(int x, int y) : x(x), y(y) {}

    void operator++(int)
    {
        this->x += 1;
        this->y += 1;
    }
    void operator++()
    {
        this->x += 1;
        this->y += 1;
    }
    void operator--(int)
    {
        this->x -= 1;
        this->y -= 1;
    }
    void operator--()
    {
        this->x -= 1;
        this->y -= 1;
    }
    void display(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

int main()
{
    Cordinates cord(10,10);
    cord++;
    cord.display();

    ++cord;
    cord.display();

    cord--;
    cord.display();

    --cord;
    cord.display();
}