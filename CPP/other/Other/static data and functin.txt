#include<iostream>

	using namespace std;

	class time 
{
	int hour;
	static int min;
	
	public:
		void get_h()
	{
		cout << "Enter hour" << endl;
		cin >> hour;
	}
		static void get_m()
	{
		cout << "Enter minutes" << endl;
		cin >> min;	
	} 
		void print()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}
};
	int time::min;
	int main()
{
    system("COLOR 0B");
	time t;
	t.get_h();
	t.get_m();
	t.print();
}
