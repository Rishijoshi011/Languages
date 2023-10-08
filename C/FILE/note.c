#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	FILE *m;
	int i,enroll,sem;
	char b[20],s[20];
	m=fopen("note.txt","w");
	 for(i=0;i<3;i++)
	{
		printf("\n\tEnter Your name");
		scanf("%s",b);
		printf("\n\tEnter your branch");
		scanf("%s",s);
		printf("\n\tEnter Your Enrollment");
		scanf("%d",&enroll);
		printf("\n\tEnter your sem");
		scanf("%d",&sem);
		fprintf(m,"\n\t%7s\n\t%7s\n\t%4d\n\t%4d\n\t",b,s,enroll,sem);
	}
	fclose(m);	
}
