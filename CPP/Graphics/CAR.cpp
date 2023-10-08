#include<graphics.h>
	int main()
{
	initwindow(800,800);
//	 for(int i=0;i<200;i++)
//	{
		line(0,400,2000,400); //road
		// wheel
		circle(200,370,30);
		circle(390,370,30);
		// car body
		line(50,350,140,350);
		line(140,350,160,375);
		arc(200,375,0,180,40);
		line(239,375,260,351);
		line(259,350,335,350);
		line(335,350,350,375);
		arc(390,375,0,180,40);
		line(430,350,460,375);	
		delay(4);
//		cleardevice();
//	}
	getch();
	closegraph();
}
