#include<iostream>
#include<conio.h>
	
	using namespace std;
	
	class employee
{
	int employee_ID;
	char employee_name[20];
	char employee_department[20];
		void printf()
	{
		cout << "ID : " << employee_ID << "\nName : " << employee_name << "\nDepartment : " << employee_department << endl;
	}
	public:
		void get()
	{
		cout << "Enter your ID, Name, Department" << endl;
		cin >> employee_ID >> employee_name >> employee_department;
	}	
		void print()
	{
		printf();
	}
};
	int main()
{
	employee e;
	e.get();
	system("cls");
	e.print();
}
