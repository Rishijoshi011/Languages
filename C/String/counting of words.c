#include<stdio.h>
   int main()
{
	char m[]="MBB LOVES TO EAT CARROT";
	int i,count=1;
	  for(i=0;m[i]!='\0';i++)
	{
		if(m[i]==' ')
		{
			count++;
		}
	}
	 printf(" %d",count);
}
