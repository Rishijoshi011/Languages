#include<stdio.h>
#include<conio.h>
	int main()
{
	system("COLOR 0B");
	char m[50],m2[50];
	int i=0,flag=0;
	printf("\n\tEnter Your something");
	gets(m);
	printf("\n\tEnter Your something");
	gets(m2);
	 while(m[i] != '\0' || m2[i] != '\0' )
	{
		 if(m[i] == m2[i])
		{
			flag = 1;
			break;
		}
	}
	 if(flag == 0)
	{
		printf("\n\t Erorr 404");	
	}
	else
	{
		printf("\n\t Done");
	}
}
