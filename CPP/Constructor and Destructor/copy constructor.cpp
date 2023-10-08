#include <iostream>

using namespace std;

class time
{
	int hour, min;

public:
	time() : hour(0), min(0) {}

	time(int h, int m) : hour(h), min(m) {}

	time(time &t) 
	{
		int hour = t.hour;
		int min = t.min;
	}

	void get()
	{
		cout << "Enter hour and min" << endl;
		cin >> hour >> min;
	}

	void print()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}
};

int main()
{
	time t1(11, 5);
	time t2(t1);
	time t3 = t1;
	t1.print();
	t2.print();
	t3.print();
}
/*  HARRY'S CODE 
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number();

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

Number::Number()
{
    a = 0;
}

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
*/