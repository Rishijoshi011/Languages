#include<stdio.h>
#include<conio.h>
#define size 5
int bins(int arr[], int s,int find)
{
		int i,max=s-1,mid=0,min=0;
	 while(min <= max)
	{
		mid = (min + max) / 2;
		 if(arr[mid] == find)
		{
			printf("\n\t Mission success");
			break;
		}
		 else if(find > arr[mid])
		{
			min=mid+1;
		}
		 else if(find < arr[mid])
		{
			max=mid-1;
		}
	}
	 if(min > max)
	printf("\n\tKal aana");
}
	int main()
{
	system("COLOR 0B");
	int arr[size],find,i;	
	printf("\n\tEnter elements of array");
	 for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\tEnter element to find");
	scanf("%d",&find);
	bins(arr,size,find);//function calls
}//main over
