#include <iostream>

using namespace std;

// return by value

// int max(int m, int b)
// {
//     if(m > b)
//         return m;
//     else
//         return b;
// }

// return by reference

// int &max(int &m, int &b)
// {
//     if (m > b)
//         return m;
//     else
//         return b;
// }

class demo
{
private:
    int m = 11, b = 7;

public:
    // int max(demo d, demo d2)
    // {
    //     if (d.m > d2.b)
    //         return d.m;
    //     else
    //         return d2.m;
    // }

    int &max(demo &d, demo &d2)
    {
        if (d.m > d2.b)
            return d.m;
        else
            return d2.m;
    }
};

int main()
{
    // int m = 11, b = 7;
    // cout << "Ans: " << max(m, b) << endl;
    demo d, d2;
    cout << "Ans: " << d.max(d,d2) << endl;

}