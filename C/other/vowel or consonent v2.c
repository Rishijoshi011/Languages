#include <stdio.h>
    int main()
{
	char m;
	printf("\n\t Enter any Alphabet");
	scanf("%c",&m);
	  switch(m)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		    printf("\n\t Your given Aplphabet is Vowel");
		break;
		default:
		    printf("\n\t Your given Alphabet is Consonent");		
	}
}
