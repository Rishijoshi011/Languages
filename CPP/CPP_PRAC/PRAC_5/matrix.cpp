#include<iostream>
#include<conio.h>
	
	using namespace std;
	
	class matrix
{
	int m[3][3];
	public:
	void get();
	void print();
};
	void matrix::get()
{
	 cout << "Enter elements of 3x3 array" << endl;
	 for(int i=0;i<3;i++)
	{
		 for(int j=0;j<3;j++)
		{
			cin >> m[i][j];
		}
	}
}
	void matrix::print()
{
	cout << "Result : " << endl;
	 for(int i=0;i<3;i++)
	{
		cout << endl;
		 for(int j=0;j<3;j++)
		{
			cout << '\t' << m[i][j];
		}
		cout << endl;
	}
}
	int main()
{
	system("COLOR 0B");
	matrix m;
	m.get();
	system("cls");
	m.print();
}
