#include<iostream>	
	
	using namespace std;
	   
	int main()
{
	system("COLOR 0B");
	int mb[10],i,size,large;
	cout << "Enter size of array" << endl;
	cin >> size;
	cout << "Enter elements of array" << endl;
	 for(i=0;i<size;i++)
	{
		cin >> mb[i];
	}
	 large=mb[0];
	 for(i=0;i<size;i++)
	{
		 if(large < mb[i])
		{
			large = mb[i];
		}
	}
	system("cls");
	 cout << large << " is the largest number in array." << endl;
}
