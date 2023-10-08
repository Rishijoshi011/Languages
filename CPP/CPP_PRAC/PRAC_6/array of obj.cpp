#include<iostream>

	using namespace std;

	class time
{
	int hour,min;
	
	public:
		void get()
	{
		cout << "What's time man" << endl;
		cin >> hour >> min;
	}
		void print()
	{
		cout << "Time is " << hour << " : " << min << endl;
	}
};
	int main()
{
    system("COLOR 0B");
	time t[10];
	int size,i;
	cout << "Enter size of array" << endl;
	cin >> size;
	 for(i=0;i<size;i++)
	{
		t[i].get();
	}
	 for(i=0;i<size;i++)
	{
		t[i].print();
	}	
	return 0;
}
