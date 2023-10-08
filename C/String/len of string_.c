#include<stdio.h>
    int main()
{
	 char m[100];
	 int i,len=0;
	 printf("\n\t Enter your Name");
	 gets(m);
	  for(i=0;m[i]!='\0';i++)
	{
		len++;
	}
	 printf("\n\t lenth:%4d",len);
}
