#include<iostream>

	using namespace std;

	int main()
{
	system("COLOR 0B");
	int farr[3][3],sarr[3][3],multi[3][3];
	int i,j,k,row,col;
	cout << "Enter size of row and column" << endl;
	cin >> row >> col;
	cout << "Enter elements of first array" << endl;
	 for(i=0;i<row;i++)
	{
		 for(j=0;j<col;j++)
		{
			cin >> farr[i][j];
		}
	}
	cout << "Enter elements of second array" << endl;
	 for(i=0;i<row;i++)
	{
		 for(j=0;j<col;j++)
		{
			cin >> sarr[i][j];
		}
	}
	 for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			multi[i][j]=0;
			  for(k=0;k<row;k++)
			{
				multi[i][j] += farr[i][k] * sarr[k][j];
			}
		} 
	}
	system("cls");
	cout << "Ans" << endl;
	 for(i=0;i<row;i++)
	{
		cout << endl;
		 for(j=0;j<col;j++)
		{
			cout << multi[i][j] << "\t";
		}
		 cout << endl;
	}
}
