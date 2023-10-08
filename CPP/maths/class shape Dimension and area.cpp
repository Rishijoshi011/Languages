#include <iostream>
#include <conio.h>

using namespace std;

class shape
{
	int area;

public:
	shape() : area(0) {}
	~shape() {}
	void get()
	{
		cout << "Enter Area" << endl;
		cin >> area;
	}
	void Area(int &r)
	{
		cout << "Area of circle : " << r * r << endl;
	}
	void Area(int &l, int &b)
	{
		cout << "Area of Rectangle : " << l * b << endl;
	}
};
int main()
{
	system("COLOR 0B");
	shape s;
	int r, b;
	s.get();
	s.Area(r, b);
}
