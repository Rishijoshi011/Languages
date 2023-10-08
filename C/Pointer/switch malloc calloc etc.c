#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
   int main()
{
	system("COLOR 0B");
	int *m,*temp;
	int i,b,s,n;
	printf("\n\tEnter 1 for malloc\n\tEnter 2 for calloc\n\tEnter 3 for realloc");
	scanf("%d",&s); 
	 switch(s)
	{
	  case 1:printf("\n\tEnter how many values you want to type");
	  		 scanf("%d",&b);
			 printf("\n\t Enter values");
			 m=(int *)malloc(b*sizeof(int));
			 temp=m;
	 		  for(i=0;i<b;i++)
			{
				scanf("%d",m);
				m++;	
			}
	 		m=temp;
	 		printf("\n\t Your given values:");
	 		 for(i=0;i<b;i++)
			{
				printf("%5d",*m);
				m++;
			}
			break;free(m);		
	 case 2:printf("\n\tEnter slots");
			scanf("%d",&b);
	 		printf("\n\t Enter sub-slots");
			scanf("%d",&n);
			m=(int *)calloc(b,sizeof(int));
			temp=m;
	 		 for(i=0;i<b*n;i++)
			{
				scanf("%d",m);
		   		m++;	
			}
	 			m=temp;
			printf("\n\t Your given values:");
	 		 for(i=0;i<b*n;i++)
			{
				printf("%3d",*m);
				m++;
			}
			break;free(m);
	 case 3:printf("\n\tEnter how many values you want to type");
			scanf("%d",&b);
			m=(int *)malloc(b*sizeof(int));
			printf("\n\tEnter new");
			scanf("%d",&b);
			printf("\n\tEnter values");
			m=realloc(m,b*sizeof(int));
			temp=m;
	 		 for(i=0;i<b;i++)
			{
				scanf("%d",m);
				m++;	
			}
	 		m=temp;
	 		printf("\n\t Your given values:");
	 		 for(i=0;i<b;i++)
			{
				printf("%5d",*m);
				m++;
			}
			break;free(m);
	 default:printf("\n\tEnter valid statment");
	}	 	
}
