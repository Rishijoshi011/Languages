#include<iostream> //pointer to data members

	using namespace std;
	
	class time
{	
	public:
		int hour,min;
};
	int main()
{
	time t;
	int time::*dptr = &time::hour;
	int time::*dptr2 = &time::min;
	cout << "Enter hour and min" << endl;
	cin >> t.*dptr >> t.*dptr2;
	cout << "Time is " << t.*dptr << " : "<< t.*dptr2 << endl;
}