#include<stdio.h>
#include<conio.h>

	int fab(int m)
{
	 if(m == 0)
		return 0;
	 else if(m==1)
	 	return 1;
	 else
	 	return (fab(m - 1)+fab(m - 2));
}
   int main()
{
	system("color 0B"); 
	int m,l;
	printf("\n\tEnter value");
	scanf("%d",&m);
	 for(l = 0;l < m;l++)
	{
		printf("\n\t%d",fab(l));
	}
}
