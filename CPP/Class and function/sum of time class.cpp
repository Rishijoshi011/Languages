#include<iostream>

	using namespace std;

	class time
{
	int hour,min;
	
	public:
		void get()
	{
		cout << "Enter Time" << endl;
		cin >> hour >> min;	
	}	
		void print()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}
		friend void add(time &,time &);
};
		void add(time &m,time &m2)
	{
		 m.hour = m.hour + m2.hour;
		 m.min = m.min + m2.min;
		 if(m.min >= 60)
		{
				m.min -= 60;
				m.hour += 1;				
		}
	}	
	int main()
{
    system("COLOR 0B");
	time t,t2;			 
	t.get();
	t2.get();
	add(t,t2);
	t.print();
}
