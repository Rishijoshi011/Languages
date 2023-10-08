#include<stdio.h>
   int main()
{
    char m[500],name[20];
	 int mar;
	 double en;
	 printf("\n\t Enter your Enrollment Number, 10th totle marks and Your name");
     scanf("%lf%d%s",&en,&mar,name);
	 sprintf(m,"\n\tEnrollment:%.lf\n\tMarks:%d\n\tName:%s",en,mar,name);
	 puts(m);	
}
