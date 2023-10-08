#include <stdio.h>
   int main ()
{ 
	 char m;  
	  printf("\n\t Enter anything from keybord.");
	  scanf("%c",&m);  // A = 65 Z = 90 a = 97 z = 122 
	   if ((m>=65 && m<=90) || (m>=97 && m<=122))
	{
	    printf("\n\t It's Alphabet. and It's ASCII value is %d",m);	
	}  
	   else 
	{
		printf("\n\t It's not Alphabet.It's ASCII value is %d",m);
    }   
}
