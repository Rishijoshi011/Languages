#include<iostream>

	using namespace std;

	class matrix 
{
	int **ck;
	int row,col;
	
	public:
		matrix() : row(0), col(0) {}
		matrix(int x,int y)
	{
		row = x;
		col = y;
		ck = new int *[row];
		 for (int i = 0; i < col; i++)
		{
			ck[i] = new int [col]; 
		}
		cout << "Enter elements" << endl;
		 for(int i = 0; i < row; i++)
		{
			 for(int j = 0; j < col; j++)
			{
				cin >> ck[i][j];
			}
		}
	}
		void print()
	{
		 for(int i = 0; i < row; i++)
		{
			 cout << endl;
			 for(int j = 0; j < col; j++)
			{
				cout << "    " << ck[i][j];
			}
			cout << endl;
		}			
	}	
};
	int main()
{
    system("COLOR 0B");
	int row,col;
	cout << "Enter size of row and col" << endl;
	cin >> row >> col;
	matrix m(row,col);
	system("cls");
	cout << "elements of " << row << "X" << col << " : "<< endl;
	m.print();
}
