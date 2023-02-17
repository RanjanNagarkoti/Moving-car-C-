#include<dos.h>
#include<graphics.h>
main()
{
	initwindow(1000, 500);
	
	for(int i=0; i<10; i++){
		
	}
	
	for(int i=0; i<1000; i++){
		//car tires
		arc( 75+i, 225, 0, 183, 35 );
		setfillstyle(11, 15);
		circle(75+i, 230, 30);
		floodfill(75+i, 230, 15);
		
		arc( 285+i, 225, 0, 183, 35 );
		setfillstyle(11, 15);
		circle(285+i, 230, 30);
		floodfill(285+i, 230, 15);
		
		circle(75+i, 230, 10);
		circle(285+i, 230, 10);
		
		//car top part
		line(100+i,120, 265+i, 120);
		
		line(50+i, 160, 100+i, 120);
		
		line(265+i, 120, 315+i, 160);
		
		line(15+i, 175, 50+i, 160);
		
		line(315+i, 160, 350+i, 175);
		
		//car body
		line(15+i, 175, 350+i, 175);
		
		line(15+i, 225, 40+i, 225);
		line(110+i, 225, 250+i, 225);
		line(320+i, 225, 350+i, 225);
		
		line(15+i, 175, 15+i, 225);
		line(350+i, 175, 350+i, 225);
		
		delay(10);
		rectangle(700, 10, 920, 110);
		
		setfillstyle(1, 4);
		circle(740, 60, 30);
		floodfill(740,60, 15);
		delay(1000);
		
		setfillstyle(1, 0);
		floodfill(740, 60, 15);
		
		setfillstyle(1, 14);
		circle(810, 60, 30);
		floodfill(810,60, 15);
		delay(1000);
		
		setfillstyle(1, 0);
		floodfill(810, 60, 15);
		
		setfillstyle(1, 2);
		circle(880, 60, 30);
		floodfill(880,60, 15);
		delay(1000);
		
		setfillstyle(1, 0);
		floodfill(880, 60, 15);
		
		line(0, 260, 1000, 260);
		cleardevice();
	}
	getch();
}
