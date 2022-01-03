#include <iostream>
#include <fstream>
#include <conio.h>
#include <graphics.h>
#include <math.h>

using namespace std;

int main()
{
	system("color 2");
	initwindow(1600 , 800 , "Code Khol");
	
	int x[10] , y[10];
	
	void read();
	fstream file_x , file_y;
	file_x.open("x.txt" , ios :: out);
	file_y.open("y.txt" , ios :: out);
	
	getch();
	
	for(int i=0 ; i<=1600 ; i++)
	{
		//delay(25);
		//cleardevice();
		
		
		circle(800 , 400 , 100);
		x[0] = 800 + 100*cos(3.1415*i/180);
		y[0] = 400 + 100*sin(3.1415*i/180);
		line(800 , 400 , x[0] , y[0]);
		circle(x[0] , y[0] , 90);
		x[1] = x[0] + 90*cos(3.1415*i*2/180);
		y[1] = y[0] + 90*sin(3.1415*i*2/180);
		line(x[0] , y[0] , x[1] , y[1]);
		circle(x[1] , y[1] , 80);
		x[2] = x[1] + 80*cos(3.1415*i*3/180);
		y[2] = y[1] + 80*sin(3.1415*i*3/180);
		line(x[1] , y[1] , x[2] , y[2]);
		circle(x[2] , y[2] , 70);
		x[3] = x[2] + 70*cos(3.1415*i*4/180);
		y[3] = y[2] + 70*sin(3.1415*i*4/180);
		line(x[2] , y[2] , x[3] , y[3]);
		circle(x[3] , y[3] , 60);
		x[4] = x[3] + 60*cos(3.1415*i*5/180);
		y[4] = y[3] + 60*sin(3.1415*i*5/180);
		line(x[3] , y[3] , x[4] , y[4]);
		circle(x[4] , y[4] , 50);
		x[5] = x[4] + 50*cos(3.1415*i*6/180);
		y[5] = y[4] + 50*sin(3.1415*i*6/180);
		line(x[4] , y[4] , x[5] , y[5]);
		circle(x[5] , y[5] , 40);
		x[6] = x[5] + 40*cos(3.1415*i*7/180);
		y[6] = y[5] + 40*sin(3.1415*i*7/180);
		line(x[5] , y[5] , x[6] , y[6]);
		line(x[6] , y[6] , 5+i , y[6]);
		//putpixel(5+i , y[6] , RED);
		file_x<<x[6]<<endl;
		file_y<<y[6]<<endl;
		
		delay(25);
		cleardevice();
		
		read();
	}																							
	
	
	system("pause>0");
}

//----------functions----------//

void read()
{
	fstream file_x , file_y;
	file_x.open("x.txt" , ios :: in);
	file_y.open("y.txt" , ios :: in);
	
	int x,y,move=5;
	
	while(file_x>>x , file_y>>y)
	{
		putpixel(move , y , GREEN);
		move++;
	}
	
}




