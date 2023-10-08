#include<stdio.h>
#include<conio.h>

	int main()
{
	system("COLOR 0B");
	int m[5]={6,5,11,8,7};
	int i,flag=0,serch;
	printf("\n\tWhich number do you want to find");
	scanf("%d",&serch);
	 while(i < 5)
	{
		 if(m[i] == serch)
		{
			flag = 1;
			printf("\n\tYou given number's index is %d",i);
			break;
		}
		i++;
	}
	 if(flag == 0)
	{
		printf("\n\tError 404");
	}
	 return 0;
}
