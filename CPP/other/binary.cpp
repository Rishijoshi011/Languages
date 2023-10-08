#include<iostream>
#include<conio.h>
#define MAX 20

	using namespace std;
	int main()
{
	system("COLOR 0B");
	int arr[MAX],i,size,high=size-1,low=0,mid=0,found;
	cout << "Enter size of array" << endl;
	cin >> size;
	cout << "Enter elements of array" << endl;
	 for(i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	cout << "Enter element to find" << endl;
	cin >> found;
	 while(low <= high)
	{
		mid = (low + high) / 2;
		 if(arr[i] == found)
		{
			cout << "Mission Success" << endl;
			break;
		}
		 else if(found > arr[mid])
		{
			low = mid + 1;
		}
		 else if(found < arr[mid])
		{
			high = mid - 1;
		}
	}
	 if(low > high)
	{
		cout << "Kal aana" << endl;
	}
	return 0;
}
