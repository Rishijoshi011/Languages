#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	int m[4][5]={{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{21,22,23,24,25}};
	int i,j,*b[4];
	 for(i=0;i<4;i++)
	{
		b[i]=&m[i][0];
	}
	  for(i=0;i<4;i++)
	{
		printf("\n");
		 for(j=0;j<5;j++)
		{
			printf("%7d",*b[i]);
			b[i]++;
		}
		printf("\n");
	}
}
