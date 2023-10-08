#include <stdio.h>
   int main()
{
	 char m; // A = 65 Z = 90 a = 97 z = 122  0 = 48 9 = 57 
	   printf("\n\t Enter anything from keybord");
	   scanf("%c",&m);
	    if(m>=65 && m<=90)
	{
		printf("\n\t Your character is a Capital Alphabet.It's ASCII value is %d",m);
	}
	    else if(m>=97 && m<=122)
	{
		printf("\n\t Your character is a Small Alphabet.It's ASCII value is %d",m);
	}
	    else if(m>=48 && m<=57)
	{
		printf("\n\t Your character is a Digit.It's ASCII value is %d",m);
	}
	    else 
	{
		printf("\n\t Your character is a Symbol.It's ASCII value is %d",m);
	}
}
