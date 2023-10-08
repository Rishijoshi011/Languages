// #include <iostream>

// using namespace std;

// class demo;

// class demo2
// {
// private:
//     int b = 7;

// public:
//     friend void print(demo &, demo2 &);
// };

// class demo
// {
// private:
//     int m = 11;

// public:
//     friend void print(demo &, demo2 &);
// };

// void print(demo &d, demo2 &d2)
// {
//     cout << "value of d: " << d.m << endl;
//     cout << "value of d2: " << d2.b << endl;
// }

// int main()
// {
//     demo m;
//     demo2 b;
//     print(m,b);
// }

#include <iostream>

using namespace std;

class demo;

class demo2
{
private:
    int b = 7;

public:
    friend void print(demo &, demo2 &);
};

class demo
{
private:
    int m = 11;

public:
    void print(demo &d, demo2 &d2)
    {
        cout << "value of d: " << d.m << endl;
        cout << "value of d2: " << d2.b << endl;
    }
};

int main()
{
    demo m;
    demo2 b;
}