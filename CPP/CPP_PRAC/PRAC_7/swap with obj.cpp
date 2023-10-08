#include<iostream>

	using namespace std;

	class time     
{
	int hour,min,sec;
	
	public:
		void get()
	{
		cout << " Enter hour, min, sec" << endl;			
		cin >> hour >> min >> sec;
	}
		void put()
	{
		cout << "Time is " << hour << " : " << min << " : " << sec << endl;	
	} 
		friend void swap(time &x, time &y)
	{
		int temp;	
		temp = x.hour;
		x.hour = y.hour;
		y.hour = temp;

		temp = x.min;
		x.min = y.min;
		y.min = temp;

		temp = x.sec;
		x.sec = y.sec;
		y.sec = temp;				 
	}
};
	int main()
{
    system("COLOR 0B");
	time t,t2;
	t.get();
	t.put();
	t2.get();
	t2.put();
	swap(t,t2);	
	system("cls");
	t.put();
	t2.put();				 
}
