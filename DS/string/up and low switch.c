#include<stdio.h>
#include<conio.h>
	
	int main()
{
	system("COLOR 0B");
	char m[20];
	int i,j,x;
	printf("\n\tEnter 1 to print all characters in uppercase\n\tEnter 2 to print all characters in lowercase\n");
	scanf("%d",&x);
	 switch(x)
	{
		case 1 :
			printf("\n\tEnter your name");
			fflush(stdin);
			gets(m);
	 	 	 while(m[i]!= '\0')
			{
		 		 if(m[i] >= 'a' && m[i] <= 'z')
				{
					m[i] = m[i] - 32;
				}
				i++;
			}
			puts(m);
			break;
		case 2 :
			printf("\n\tEnter your name");
			fflush(stdin);
			gets(m);
	 		 while(m[i]!= '\0')
			{
		 		 if(m[i] >= 'A' && m[i] <= 'Z')
				{
					m[i] = m[i] + 32;
				}
				i++;
			}
			puts(m);
			break;
		default : 
			printf("\n\tEnter valid operation");
	}
}
