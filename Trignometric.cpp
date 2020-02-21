#include "Trignometric.h"
#include<graphics.h>
#include<string>
#include <math.h>
#include <iostream>
#include<vector>
#include<windows.h>
#include<fstream>
Trignometric::Trignometric()
{
	rad=0;
	rangeMax=0;
using namespace std;
	rangeMin=0;
	func=" ";
}
Trignometric::Trignometric(double r, double ranMax,double ranMin,string func)
{
	rad=r;
	rangeMax=ranMax;
	rangeMin=ranMin;
	func=func;
}
void Trignometric::setValues()
{
    cout<<"Enter radius: ";
	cin>>rad;
    cout<<"Input range in degrees as follows\nFrom:";
    cin>>rangeMin;
    cout<<"To:";
    cin>>rangeMax;
    cout<<"function: ";
    cin>>func;
}
void Trignometric::setPixel()
{
	initwindow(800, 700, "First Sample");
        
        for(int n=0; n<700; n++)//vertical axis
            {
                    putpixel(400, n, WHITE);
            }
        for(int m=0; m<800; m++)//horizontal axis
            {
                    putpixel(m, 350, WHITE);
        }	
}
void Trignometric::getGraph()
{
	 for(double i=rangeMin; i<rangeMax; i=i+0.01)
        {
                double theta=i;
                double r;
                int ra=rad*50;
                if (func=="cos")
                {
                     r=ra*cos(theta);
                }
                else if (func=="sin")
                {
                     r=ra*sin(theta);
                }
                //going to cartisian coordiante system
                double x = r*cos(theta);
                double y = r*sin(theta);
                putpixel(x+400.0, y+350.0, RED);
        }
         while (!kbhit( ))
    {
        delay(200);
    }
    
    getch();
    closegraph( );
    restorecrtmode();
}

