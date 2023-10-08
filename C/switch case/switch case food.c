#include <stdio.h>
    int main ()
{
	char m,b;
	printf("\n\tEnter your choice's Food");
	printf("\n\t Enter \n\t P for Panjabi \n\t C for Chinese \n\t I for Italian \n\t S for South Indian");
	scanf("%c",&m);
	  switch (m)
	{
		 case'P': 
		 case'p': 
		     printf("\n\t Your choice is Panjabi");
		 break;
		 case'C': 
		 case'c':
		     printf("\n\t Your choice is Chinese");
		 break;
		 case'I': 
		 case'i':
		     printf("\n\t Your choice is Italian");
		 break;
		 case'S': 
		 case's':
		     printf("\n\t Your choice is South Indian");
		 break;
		 default:
		     printf("\n\t Sorry Your Choice is not available");     
	}
}
