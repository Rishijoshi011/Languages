#include<graphics.h>
#include<conio.h>
  int main()
{
	initwindow(1000,1000);
	setcolor(RED);
	setfillstyle(1,BLUE);
	circle(300,300,50);
	floodfill(300,300,RED);
	delay(4);
	getch();
	closegraph();
}
