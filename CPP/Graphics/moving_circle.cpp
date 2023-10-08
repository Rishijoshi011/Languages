#include<graphics.h>
#include<conio.h>
  int main()
{
	int i;
	initwindow(1000,1000);
	 for(i=0;i<=800;i++)
	{
		putpixel(i,350,RED);
		delay(4);
	} 
	 for(i=0;i<=500;i++)
	{
		cleardevice();
		circle(300+i,300,25);
		circle(370+i,300,25);
		delay(2);
	}
	getch();
	closegraph();
}
