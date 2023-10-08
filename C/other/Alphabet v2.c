#include <stdio.h>
   int main ()
{ 
	 char m,b;   // RISHI = 8273837273 
	  printf("\n\t Enter anything frome keybord.");
	  scanf("%c%c",&m,&b);  // A = 65 Z = 90 a = 97 z = 122 
	   if ((m>=65 && m<=90) || (m>=97 && m<=122))
	{
	    printf("\n\t It's Alphabet. and It's ASCII value is %d",m);	
	} 
	   else if ((m>=65 && m<=90 || b>=65 && b<=90) || (m>=97 && m<=122 || b>=97 && b<=122 ))
    {
    	printf("\n\t They're Alphabet. Their ASCII value is %d%d",m,b);
	}
	   else if ((m>=65 && m<=90 || b>=65 && b<=90) || (m>=97 && m<=122 || b>=97 && b<=122 ))
	{
		printf("\n\t They're not alphabet. Their ASCII value is %d%d",m,b);
	}  
	   else 
	{
		printf("\n\t It's not Alphabat.It's ASCCI value is %d",m);
    }   
}
