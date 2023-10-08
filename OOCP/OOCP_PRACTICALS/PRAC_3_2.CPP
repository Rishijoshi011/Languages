#include <iostream>

using namespace std;

class Demo
{
public:
    double power(double num, int pow = 2)
    {
        double result = 1;
        for (int i = 0; i < pow; i++)
        {
            result *= num;
        }

        return result;
    }
};

int main()
{
    Demo d;
    double value;
    int pow;
    cout << "Enter Value and it's power" << endl;
    cin >> value >> pow;
    cout << "Power is: " << d.power(value) << endl;
    cout << "Power is: " << d.power(value, pow) << endl;

    return 0;
}