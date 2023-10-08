#include <stdio.h> 
#include<conio.h>
int sum(int m[],int s,int len);  
int main()
{
	system("COLOR 0E");
    int m[100];
    int b, i, sumofarr;
    printf("Enter size of the Array");
    scanf("%d", &b);                                     
    printf("Enter elements in the Array");
    for(i=0; i<b; i++)
    {
        scanf("%d", &m[i]);
    }
    sumofarr=sum(m, 0, b);
    printf("Sum of array elements: %d", sumofarr);
} 
	int sum(int m[],int s,int len)
{
    if(s>=len)
        return 0;
    return (m[s]+sum(m,s+1,len));
}
