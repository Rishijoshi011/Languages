#include<iostream> //pointer to member function

	using namespace std;

	class time
{
	int hour,min;
	
	public:
		void get()
	{
		cout << "Enter hour and min" << endl;
		cin >> hour >> min;
	}
		void put()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}		
};
	int main()
{
    system("COLOR 0B");
	time t;
	void (time::*fptr)() = &time::get;
	void (time::*fptr2)() = &time::put;
	(t.*fptr)();
	system("cls");
	(t.*fptr2)();
}
