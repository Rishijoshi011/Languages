#include<iostream>
#include<conio.h>
	
	using namespace std;
	
	class time 
{
	 int hour,min;
	
	public:
	 void get()
	{
		cout << "Enter time (hour : min)" << endl;
		cin >> hour >> min; 
	}
	 friend void put(time t)
	{
		cout << "Time is " << t.hour << ":" << t.min << endl; 
	}
};	
	int main()
{
	system("COLOR 0B");
	time t1;
	t1.get();
	put(t1);
}
