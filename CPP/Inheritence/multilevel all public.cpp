#include<iostream>

    using namespace std;

    class HOUR
{
 	 int hour;
 	 
 	 public:
 	 	void get()
 	{
 		cout << "Enter hour" << endl;
		cin >> hour;	
	}
		void put()
	{
		cout << "Hour : " << hour << endl;
	}
};

	class MIN : public HOUR
{
	int min;	
	
	public:
		void get()
	{
		HOUR::get();
		cout << "Enter min" << endl;  
		cin >> min;
	}
		void put()
	{
		HOUR::put();
		cout << "Min : " << min << endl;
	}
};

	class SEC : public MIN
{
	int sec;
	
	public:
		void get()
	{
		MIN::get();
		cout << "Enter Second" << endl;	
		cin >> sec;
	}	
		void put()
	{
		MIN::put();
		cout << "Sec : " << sec << endl;
	}
};
  	
	  int main()
{
	system("COLOR 0B");
	HOUR h;
	MIN m;
	SEC s;
	cout << "**************using super class***************" << endl;
	h.get();
	h.put();
	cout << "*************using base class****************" << endl;
	m.get();
	m.put();
	cout << "************using derived class***************" << endl;	
	s.get();
	s.put();
}
