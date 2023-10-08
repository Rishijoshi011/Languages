#include<stdio.h>
#include<conio.h>
#include<ctype.h>
   int main()
{
	system("COLOR 0B");
	char m;
	printf("\n\tEnter something from keyborad");
	scanf("%s",&m);
	 if(isgraph(m))
	{
		if(isalnum(m))
		{
			 if(isalpha(m))
			{
				 if(isupper(m))
				{
					printf("\n\tUpper alpha");
				}
			 	 else if(islower(m))
				{
					printf("\n\tLower alpha");
				}
			}
			 else if(isdigit(m))
			{
				printf("\n\tDigit");
			}
		}
		 if(isspace(m))
		{
			printf("\n\tSpace");
		}
	}
}
