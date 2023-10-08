#include<stdio.h>
#include<conio.h>

	void toh(int n, char e, char d, char t) // e = exist, d = destination, t = temp;
{
	 if(n == 0)
	{
		return;	
	}	
	toh(n - 1,e,t,d);
	printf("\n\t Move %d disk %c to %c",n,e,d);	
	toh(n-1,t,d,e);
}

	int main()
{
	int n;
	char e,d,t;
	printf("\n\tEnter no. of disk");
	scanf("%d",&n);
	toh(n,'A','C','B');
}
