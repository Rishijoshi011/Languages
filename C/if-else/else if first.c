#include <stdio.h>
       int main()
    {
        float m;
    	printf("\n\t Enter the percentage of your 12th");
    	scanf("%f",& m);
    	printf("\n\t Your given percentage is %f.",m);
    	goto mills;
		  if(m>=90.00 && m<=100.00)
    	{ 
    		printf("\n\t You should do MBBS because your percentage is %f.",m);
		}
		  	  else if(m>=101.00)
		{
			printf("\n\t Enter valid per.");
		}  
	
		else if (m>=80.00 && m<=89.00)
		{
			printf("\n\t You should do BDS because your percentage is %f.",m);
		}
		else if (m>=70.00 && m<=79.00)
		{
			printf("\n\t You should do BHSC because your percentage is %f.",m);
		}
		 mills:
		else if (m>=60.00 && m<=49.00) 
		{
			printf("\n\t You should do BAMS because your percentage is %f.",m);
		}
		else if (m>=45.00)
		{
			printf("\n\t You should repeat 12th");
		}
		else 
		{
			printf("\n\t Congratulation!!!\n\t You will say this in some time,\n\t this auto is gifted by daddy");
		}
	}
