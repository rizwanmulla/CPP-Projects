#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<process.h>
#define pi 3.14

char speed[4];
int theta=0,change=1,temp=0,ch;
float x,y,r=100;

void main()
{
	clrscr();
	int gd=DETECT,gm,fan;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	strcpy(speed,"on 1");
	outtextxy(200,20,"working fan");
	outtextxy(150,50,"use number 0 1 2 3 to change fan speed");
	outtextxy(475,375,"fan speed");
	fan:
	do
		{
		cleardevice();
		outtextxy(200,20,"working fan");
		outtextxy(150,50,"use number 0 1 2 3 to change fan speed");
		outtextxy(475,375,"fan speed");
		if(kbhit())
			{
			ch=getch();
			if(ch=='0')
				{
				rectangle(495,395,535,410);
				floodfill(515,405,15);
				temp=1;
				}
			if(ch=='1')
				{
				strcpy(speed,"on 1");
				change=1;
				}
			if(ch=='2')
				{
				strcpy(speed,"on 2");
				change=3;
				}
			 if(ch=='3')
				{
				strcpy(speed,"on 3");
				change=18;
				}
			}
	outtextxy(500,400,speed);
	circle(320,240,(r/12));
	circle(320,240,(r/6));
	circle(320,240,(r/4));
	x=r*(cos((pi*theta)/180));
	y=r*sin((pi*theta)/180);
	line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y));
	line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));
	line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));
	x=r*cos((pi*(theta+120))/180);
	y=r*sin((pi*(theta+120))/180);
	line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y));
	line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));
	line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));
	x=r*cos((pi*(theta+240))/180);
	y=r*sin((pi*(theta+240))/180);
	line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y));
	line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));
	line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));
		if(temp!=1)

			delay(65/change);
		else
			{
			ch=getche();
				if(ch=='\r')
				 exit(0);
				if(ch=='0')
				temp=1;
				if(ch=='1')
				{
				strcpy(speed,"on 1");
				temp=0;
				change=1;
				}
				if(ch=='2')
				{
				strcpy(speed,"on 2");
				temp=0;
				change=3;
				}
				if(ch=='3');
				{
				strcpy(speed," on 3");
				temp=0;
				change=18;
				}
			       if(ch=='4')
				{
				strcpy(speed,"off");
				temp=1;
				}
			       }
				if(theta==360)
				{
				theta=0;
				theta++;
				}
				}while(temp==0);
				goto fan;
			       }





//}