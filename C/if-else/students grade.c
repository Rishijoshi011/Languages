    // this is a program of students's grade  
#include <stdio.h>
   int main ()
{
	int m;
	  printf("\n\t Enter your marks system will display your grade",m);
	  scanf("%d",&m);
	   if(m>=80 && m<=100)
	  {
		  printf("\n\t Your given marks is %d. Your grade is distinction",m);
	  }
	  else if (m>=101)
	  {
	  	 printf("\n\t Enter valid Marks");
	  }
	   else if(m>=60 && m<=79)
	  {
	  	printf("\n\t Your given marks is %d. Your grade is first class",m);
	  }
	   else if (m>=35 && m<=59)
	{
		printf("\n\t Your given marks is %d. Your grade is second class",m);
	}
	   else 
	{
		printf("\n\t Your given marks is %d. Better luck next time",m);
	}
}
