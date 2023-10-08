    // this is program a for eligiable for university 
#include <stdio.h>
        int main ()
{
    	int m,b,r,j,d;
    	printf("\n\t Enter Your marks \n\t Maths,Physics,English,Chemistry");
    	scanf("%d%d%d%d",&m,&b,&r,&d);
    	j=m+b+r+d;
    	printf("\n\t Your total marks are %d",j);
    	if ((j>=145 && m>=35 && b>=35 && r>=35 && d>=35) || j>=490 && j>=400) 
    {
    	printf("\n\tYou are Eligibale for addmision in our university");
	}
		else
	{
		printf("\n\t BETTER LUCK NEXT TIME ");
	}
}
