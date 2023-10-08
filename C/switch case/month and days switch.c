#include<stdio.h>
  int main()
{
	 int m; 
	 MBB:
	  printf("\n\t Enter Number of a Month");
	  scanf("%d",&m);
	   switch(m)
	{
		case 1: printf("\n\t 31 days in january");
		break;
		case 2: printf("\n\t 29 days in February");
		break;
		case 3: printf("\n\t 31 days in March");
		break;
		case 4: printf("\n\t 30 days in April");
		break;
		case 5: printf("\n\t 31 days in May");
		break;
		case 6: printf("\n\t 30 days in June");
		break;
		case 7: printf("\n\t 31 days in July");
		break;
		case 8: printf("\n\t 31 days in August");
		break;
		case 9: printf("\n\t 30 days in September");
		break;
		case 10: printf("\n\t 31 days in October");
		break;
		case 11: printf("\n\t 30 days in November");
		break;
		case 12: printf("\n\t 31 days in December");
		break;       
		default: printf("\n\t There are only Twelve months if you dont know :)");
	}	
}
