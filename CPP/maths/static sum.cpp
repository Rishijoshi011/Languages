#include<iostream>

	using namespace std;

	class demo
{
	int a;
	static int b;
	
	public:
		void get_a()
	{
		cout << "Enter any value" << endl;
		cin >> a;
	}
		static void get_b()
	{
		cout << "Enter any value" << endl;
		cin >> b;
	}	
		void print()
	{
		cout << "Sum : " << a+b << endl;
	}
};
	int demo::b; 
	int main()
{
    system("COLOR 0B");
	demo d;
	d.get_a();
	d.get_b();
	d.print(); 
}
