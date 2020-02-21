#include<graphics.h>
#include<string>
#include <math.h>
#include <iostream>
#include<conio.h>

#include<windows.h>
#include<fstream>
#include"Trignometric.h"
#include"Polar.h"
#include"Spiral.h"
#include"Exponential.h"
int main(){
	ifstream fin;
	ofstream fout;
	fin.open("Input.txt");
	string next;
	getline(fin,next);
	cout<<next;
	fout.open("Output.txt");
	fout<<"Have a nice day!";
	fin.close();
	fout.close();
	Trignometric obj;
	Polar obP;
	Spiral *obS;
	Exponential *obE;
	int gd= DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   setcolor(3);
   settextstyle(10,0,4);
   outtextxy(220,1,"Grapher");
   delay(200);
	int a=0;
	while(a==0)
	{
		while(!ismouseclick(WM_LBUTTONDBLCLK))
		{
			settextstyle(DEFAULT_FONT, HORIZ_DIR,1);
			setcolor(3);
			rectangle(220,35,350,35);
			system(" color F2 ");
			setcolor(BLUE);
			settextstyle(5,0,3);
			rectangle(20,50,190,100);
			outtextxy(40,70,"Trignometric");
			rectangle(220,50,400,100);
			outtextxy(250,70,"Polar");
			rectangle(430,50,600,100);
			outtextxy(480,70,"Spiral");
			rectangle(210,120,410,170);
			outtextxy(230,130,"Exponential");
			settextstyle(10,HORIZ_DIR,1);
			setcolor(8);
			outtextxy(160,280,"Or click anywhere to quit");
			delay(50);
		}
		int x=40,m=250,c=480,e=230;
		int y=70,b=70,d=70,f=130;
		getmouseclick(WM_LBUTTONDBLCLK,x,y);
		closegraph();
		if(y>=50 && y<=100)
		{
			if(x>=220&&x<=400)
		{
			cout<<"\n\n\t\tPOLAR CURVES\n\n";
			initwindow(800,800);
			obP.setValues();
			obP.getGraph();
			closegraph();		
	}
	   else if(x>=20&&x<=190)
		{
			cout<<"\n\n\t\tTRIGNOMETRIC CURVES\n\n";
			obj.setValues();
			obj.setPixel();
			obj.getGraph();
			a=1;
		}
		else if(x>=430 &&x<=600)
		{
			cout<<"\n\n\t\tSPIRAL CURVES\n\n";
			obS->setValues();
			//obS->setPixel();
			obS->getGraph();
			
		}
		}
		else if(y>=120&&y<=170)
		{
			if(x>=210 &&x<=410)
			{
				cout<<"\n\n\t\tEXPONENTIAL CURVES\n\n";
				obE->setValues();
			    obE->getGraph();
			}
		}
		else
		{
			exit(1);
		}
}
getch();
	return 0;
}
	
