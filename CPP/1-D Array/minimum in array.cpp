#include<iostream>	
	
	using namespace std;
	   
	int main()
{
	system("COLOR 0B");
	int mb[10],i,size,mini;
	cout << "Enter size of array" << endl;
	cin >> size;
	cout << "Enter elements of array" << endl;
	 for(i=0;i<size;i++)
	{
		cin >> mb[i];
	}
	 mini=mb[0];
	 for(i=0;i<size;i++)
	{
		 if(mini > mb[i])
		{
			mini = mb[i];
		}
	}
	system("cls");
	 cout << mini << " is the minimum number in array." << endl;
}
