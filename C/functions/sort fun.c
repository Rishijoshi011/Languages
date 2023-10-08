#include<stdio.h>
#include<conio.h>
int arrsort(int m[]); 
   int main()
{
	system("COLOR 0B");
	  int m[5];
	  arrsort(m);
}
  int arrsort(int s[])
{
		int m[5],size,i,j,temp=0;
	printf("\n\t Enter size of an Array");
	scanf("%d",&size);
	printf("\n Enter Elements of an Array");
	  for(i=0;i<size;i++)
	{
		scanf("%d",&m[i]);
	}
	 for(i=0;i<size;i++)
	{
		 for(j=i+1;j<size;j++)
		{
			 if(m[i]>m[j])
			{
				temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
	  printf("\n\t Your numbers in Acending order");
	   for(i=0;i<size;++i)
	{
		printf("\n\t m[%d] is m[%d] ",i,m[i]);	
	}
}
