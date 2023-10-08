#include<iostream>

    using namespace std;

    class student
{
  	string name;
  	int enroll;
  	
  	public:
  		void get()
  	{
  		cout << "Enter your Name" << endl;	
		getline(cin,name);	
		cout << "Enter you Enrollment number" << endl;
		cin >> enroll;
	}
		void print()
	{
		cout << "Name : " << name << "\nEnrollment No." << enroll << endl;	
	}
};

	class sports : protected student
{
	string sp; // in which sport
	
	public:
		void get()
	{
		student::get();
		cout << "In which sport do you want to join" << endl;
		fflush(stdin);
		getline(cin,sp);
	}
		void print()
	{
		student::print();
		cout << "sport interest : " << sp << endl; 
	}
};

	class tech : protected student
{
	string tech;
	
	public:
		void get()
	{
		student::get();
		cout << "Enter your most likely subject" << endl;
		fflush(stdin);
		getline(cin,tech);
	}
		void print()
	{
		student::print();
		cout << "Tech subject : " << tech << endl;
	}
};
  	int main()
{
	system("COLOR 0B");
	sports s;
	sports *pob_s = &s;
	void (sports::*pmf_s)() = sports::print; 
	tech t;
	tech *pob_t = &t;
	void (tech::*pmf_t)() = tech::print;
	s.get();
	t.get();
	system("cls");
	(*pob_s.*pmf_s)();
	cout << endl;
	(*pob_t.*pmf_t)();
}
