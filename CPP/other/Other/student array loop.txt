#include<iostream>
using namespace std;
struct student 
{
	char name[10];
	int marks;
};
	int main()
{
	system("COLOR 0B");
	struct student st[3];
	int i;
	cout << "Enter Subject name and marks" << endl;
	 for(i=0;i<3;i++)
	{
		cin >> st[i].name >> st[i].marks;
	}
	 for(i=0;i<3;i++)
	{
		cout << st[i].name << st[i].marks << endl;
	}
	return 0;
}
