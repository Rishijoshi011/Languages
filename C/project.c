#include<stdio.h>
#include<conio.h>
	
	int main()
{
	system("COLOR 0B");
	int height[20],width=1,no_bui,i,j,min,max,twidth,x;
	int area1; // min * twidth
	int area2; // max * width
	printf("\n\tEnter Number of buildings");
	scanf("%d",&no_bui);
	printf("\n\tEnter hight of all buildings");
	 for(i=0;i<no_bui;i++)
	{
		scanf("%d",&height[i]);
	}
	 for(i=0;i<no_bui;i++)
	{
		 for(j=i+1;j<no_bui;j++)
		{
			 if(height[i] > height[j])
			{
				int temp;
				temp = height[i];
				height[i] = height[j];
				height[j] = temp;
				
			}
		}
	}
	min = height[0];
	max = height[no_bui - 1]; 
	twidth = 1  * no_bui;
	area1 = min * twidth;
	area2 = max * width; 
	 for(i=0;i<no_bui;i++)
	{
		 if(area1 > area2)
		{
			printf("\n\tMaximum size of Banner is : %d m^2", area1);
			break;
		}
		 else if (area1 < area2)
		{
			printf("\n\tMaximum size of banner is : %d m^2", area2);	
			break;
		}
	} 
	printf("\n\tDo you wanna know details? Type 1");
	scanf("%d",&x);
	system("cls");
	 if(x==1)
	{
		 for(i=0;i<no_bui;i++)
		{
			printf("\n\t%d Building's height is %d\n",i+1,height[i]);
		}
		printf("\n\tMaximum height of building is %d\n",max);
		printf("\n\tMinimum height of building is %d\n",min);
		printf("\n\tTotal width of buildings is %d\n",twidth);
	}
}
