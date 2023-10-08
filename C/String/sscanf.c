#include<stdio.h>
   int main()
{
    char m[50],name[20];
	double en;
	int mar;
	 printf("\n\t Enter your Enrollment Number, 10th totle marks and Your name");
     scanf("%lf%d%s",&en,&mar,name);	
	 sscanf(m,"%lf,%d,%s",&en,&mar,name);
	 printf("\n\t Your given Enrollment Number:%.lf",en);
	 printf("\n\t Your given Marks:%3d",mar);
	 printf("\n\t Name:%3s",name); 	   
}
