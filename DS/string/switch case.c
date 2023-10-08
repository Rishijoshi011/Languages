#include<stdio.h>
#include<conio.h>
#include<string.h>

	int main()
{
	system("COLOR 0B");
	int n,len,len2,i = 0, j = 0, flag = 0,num,pos,length = 0;
	char str[50],str2[50];
	printf("\n\tEnter first string");
	gets(str);
	printf("\n\t Enter 1 for find string \n\t 2 for delete string \n\t 3 for insert string");
	scanf("%d",&n);
	 switch(n)
	{
		case 1 :
				printf("\n\tEnter second string");
				fflush(stdin);
				gets(str2);
				len = strlen(str);
				len2 = strlen(str2);
				 for(i = 0;i < len;i++)
				{
					 for(j = 0; j < len2;j++)
					{
						 if(str[i + j] != str2[j]) 
						{
							break;
						}
					}
					 if(j == len2)
					{
						flag++;
						printf("\n\tString is found at index %d",i);
					}
				}
				break;
		case 2 :
				length = strlen(str);
				printf("\n\tEnter the position");
				scanf("%d",&pos);
				 if(pos >= length)
				{
					printf("\n\tError 404");
				}
				printf("\n\tEnter how many character you want to delete");
				scanf("%d",&num);
				 for(i = pos + num;i <= length; i++)
				{
					str[i - num] = str[i];
				}
				printf("\n\tAfter delete : ");
				puts(str);
				break;
		case 3 :
				printf("\n\tEnter second string");
				fflush(stdin);
				gets(str2);
				len = strlen(str);
				len2 = strlen(str2);
				printf("\n\tEnter postion where you want to insert");
				scanf("%d",&pos);
				 if(pos >= len)
				{
					printf("\n\tInvalid");
				}
				 for(i = len;i > pos; i--)
				{
					str[i + len2] = str[i];
				}
				 for(i = 0; i < len2; i++)
				{
					str[pos + i] = str2[i];
				}
				printf("\nAfter insert : ");
				puts(str);
				break;
		default :
				printf("\n\tINVALID OPERATION");
	}	// caso tres no funciona
}
