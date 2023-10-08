#include <iostream>

using namespace std;

class Distance
{
    float inch, feet;

public:
    Distance() : inch(0), feet(0) {}
    Distance(float inch, float feet) : inch(inch), feet(feet) {}

    bool operator==(const Distance &dist) const
    {
        return (this->inch == dist.inch && this->feet == dist.feet);
    }

    bool operator>(const Distance &dist) const
    {
        return (this->inch > dist.inch || (this->inch == dist.inch && this->feet > dist.feet));
    }

    bool operator<(const Distance &dist) const
    {
        return (this->inch < dist.inch || (this->inch == dist.inch && this->feet < dist.feet));
    }
};

int main()
{
    Distance d1(12, 25);
    Distance d2(22, 55);

    if (d1 == d2)
    {
        cout << "Distances are equal." << endl;
    }
    else if (d1 > d2)
    {
        cout << "d1 is greater than d2." << endl;
    }
    else if (d1 < d2)
    {
        cout << "d1 is smaller than d2." << endl;
    }

    return 0;
}
