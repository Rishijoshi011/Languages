#include<stdio.h>
#include<conio.h>
  int main(void)
{
	 char m[10],r[10],ans;
	 puts("\n\t Enter Name of Person \b");
	 gets(m);
	 system("cls");
	 printf("\n\t The given Name is: ");
	 puts(m);
	 puts("\n\t Type Yes for Rename; Type No to continue");
	 gets(ans);
	  if(ans='Yes')
	{
		printf("\n\t 123");
	}
	  else if(ans='No')
	{
	  printf("\n\t 456");	
	}
	 else
	{
		printf("\n\t 789");
	}
}
