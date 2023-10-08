#include<stdio.h>
#include<string.h>
   int main()
{
	char m[]="COMPUTER",b[]=" engineering",f[100];
	int i,i2,i3;
	 printf("\n\tPress 1 for reverse\n\tPress 2 for length\n\tPress 3 for Merge");
	 printf("\n\tPress 4 for Copy\n\tPress 5 for Upper or lower\n\tPress 6 for Compere");
	 scanf("%d",&i);
	 switch(i)
	{
	 case 1:strrev(m);strrev(b);
	 		printf("\n\tFirst String: %s\n\tSecond String: %s",m,b); 	
	  		break;  
	 case 2:printf("\n\tLength of First String:%d\n\tLength of Second String:%2d",strlen(m),strlen(b));
			break;
	 case 3:strcat(m,b);printf("\n");
	 		puts(m);
	 		break;
	 case 4:printf("\n\tWhich string you want to copy Press 1 for First. Press 2 for Second");
	 		 scanf("%d",&i2);
			  switch(i2)
	 		{
	 			 case 1:strcpy(f,m);printf("\n\t");
	 			 		puts(f);break;	
	 			 case 2:strcpy(f,b);printf("\n\t");
				  		puts(f);break; 		
			}
	 case 5:printf("\n\tpress 1 for upper(Second string) and press 2 for lower(First string)");
	 		scanf("%d",&i3);
			 switch(i3)
			{
				case 1:strupr(b);printf("\n\t");
					   puts(b);break;
				case 2:strlwr(m);printf("\n\t");
				 	   puts(m);break;		   				
			}	
	 case 6:printf("\n\t %d",strcmp(m,b));
	 		break;
	 case 7:strstr(m,"PUT");
	 		break;
	 		default:printf("\n\t BSDK masti na kar");
	}
}
