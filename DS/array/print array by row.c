#include<stdio.h>
#include<conio.h>

	int main()
{
	system("COLOR 0B");
	int m[4][3],i,j;
	printf("\n\tEnter elements of array");
	 for(i=0;i<4;i++)
	{
		 for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	system("cls");
	printf("\nAns : ");
	 for(i=0;i<4;i++)
	{
		printf("\n");
		 for(j=0;j<3;j++)
		{
			printf("\t%d",m[i][j]);
		}
		printf("\n");
	}
}
