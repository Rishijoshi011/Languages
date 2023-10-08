#include<iostream>

	using namespace std;

	class demo
{
	int m;
	static int count;
	
	public:
		demo()
	{
		m=0;
		count++;
	}
		demo(int m)
	{
		count++;
	}
		void print()
	{
		cout << "Total number of calling constructor : " << count << endl;	
	}	
};
	int demo::count;
	int main()
{
    system("COLOR 0B");
	demo d,d2;
	demo d3(11);
	d.print();
	demo d4,d5,d6(11);
	d.print();
}
