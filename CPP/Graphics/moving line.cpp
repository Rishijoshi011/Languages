#include<graphics.h>
	int main()
{
	initwindow(1000,1000);
	 for(int i=0;i<=500;i++)
	{
		cleardevice();
		setcolor(RED);
		arc(15+i,500+i,150,350,95);		
	//	line(200-i,225,300-i,225+i);
		delay(4);
	}
	getch();
	closegraph();
}
