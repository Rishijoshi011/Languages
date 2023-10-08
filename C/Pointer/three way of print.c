#include<stdio.h>
#include<conio.h>
    int main()
{
	system("COLOR 0B");
	int m=11,*b,**l;
	 b=&m;
	 l=&b;
	 printf("\n\tFirst  way:%3d",m);
	 printf("\n\tSecond way:%3d",*b);
	 printf("\n\tThird  way:%3d",**l);
	 printf("\n\tFirst  way:%3u",&m);
	 printf("\n\tSecond way:%3u",b);
	 printf("\n\tThird  way:%3u",l);

}
