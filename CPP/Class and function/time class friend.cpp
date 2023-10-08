#include<iostream>
#include<conio.h>

	using namespace std;
	
	class time
{
	int hour,min;
	
	public:
		 void get()
		{
			cin >> hour >> min;
		}
		 void put()
		{
			cout << "Time is " << hour << " : " << min << endl;
		}
		 friend void swap(time &m, time &m2)
		{
			int temp=0;
			temp = m.hour;
			m.hour = m2.hour;
			m2.hour = temp;
			
			temp = m.min;
			m.min = m2.min;
			m2.min = temp;			
		}
};
	int main()
{
	system("COLOR 0B");
	time t1,t2;
	cout << "Enter time" << endl;
	t1.get();
	cout << "Enter time" << endl;
	t2.get();
	cout << "Before swap t1 : " << endl << '\t';
	t1.put();
	cout << "Before swap t2 : " << endl << '\t';
	t2.put();
	swap(t1,t2);
	cout << "After swap t1 : " << endl << '\t';
	t1.put();
	cout << "After swap t2 : " << endl << '\t';	
	t2.put();
}
