#include <stdio.h>
      int main()
{
	   int m,b,j;
	   char r,v;
	   repeat:
	   printf("\n\t Enter two values");
	   scanf("%d%d",&m,&b);
	   _flushall();
	   printf("\n\t Enter \n\t + for Addision \n\t - for substraction \n\t / for Division \n\t * for Multiplication");
	   scanf("%c",&r);
	   printf("\n\t%d is ASCII value",r);
	   _flushall();  
		 switch(r)
	{
		case '+':
			 j=m+b;
			 printf("\n\n\t %d is your answer. Your given value: %d and %d",j,m,b);
		break;
		case '-':
		     j=m-b;
		     printf("\n\n\t %d is your answer. Your given value: %d and %d",j,m,b);
		break;
		case '/':
		     j=m/b;
		     printf("\n\n\t %d is your answer. Your given value: %d and %d",j,m,b);
		break;
		case '*':
		     j=m*b;
			 printf("\n\n\t %d is your answer. Your given value: %d and %d",j,m,b);
		break;
		default:
			printf("\n\n\t Enter valid Opreation"); 	 	 
	}
           printf("\n\t Do you want check more number? If Yes type yes and NO type no");
     _flushall();
     scanf("%c",&v);
  	        if(v=='yes' || v=='Yes')
  	    {
  	    	goto repeat;
		}    
}   
