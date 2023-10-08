#include <iostream>

using namespace std;

class a
{
    protected:
    int v_a;

public:
    a() : v_a(0) {}
    a(int x)
    {
        v_a = x;
    }
    void print()
    {
        cout << "v_a : " << v_a << endl;
    }
};
class b
{
    protected:
    int v_b;

public:
    b() : v_b(0) {}
    b(int x)
    {
        v_b = x;
    }
    void print()
    {
        cout << "v_b : " << v_b << endl;
    }
};
class c : public a, public b
{
    protected:
    int v_c;

public:
    c() : v_c(0) {}
    c(int x, int y, int z) : a(x), b(y)
    {
        v_c = z;
    }
    void print()
    {
        a::print();
        b::print();
        cout << "v_c : " << v_c << endl;
    }
    void sum()
    {
        int temp;
        temp = v_a + v_b + v_c; 
        cout << "Total is : " << temp << endl;
    }
};

int main()
{
    system("COLOR 0B");
    c c1(11, 12, 13);
    c1.print();
    c1.sum();
}