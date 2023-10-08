#include<iostream> //pointer to object

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
    time t, *optr;
	optr = &t;
	optr -> get();
	system("cls");
	optr -> put();
}
