#include<iostream>

	using namespace std;
	
	class time 
{
	int hour,min;
	
	public:
		time() //: hour(0),min(0) {}
	{
		hour = 0;
		min = 0;
	}
		time(int h,int m) //: hour(h),min(m){} 
	{
		hour = h;
		min = m;
	}
		void get()
	{
		cout << "Enter hour and min" << endl;
		cin >> hour >> min ;
	}
		void print()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}
};
	int main()
{
    system("COLOR 0B");
	time t1(11,5);
	time t2(t1);
	time t3 = t1;
	t1.print();
	t2.print();
	t3.print();
}
