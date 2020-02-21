#include "Spiral.h"
#include<graphics.h>
#include<string>
#include <math.h>
#include <iostream>
#include<vector>
#include<windows.h>
#include<fstream>
Spiral::Spiral()
{
	a=0;
	p=0;
	rangeMax=0;
	rangeMin=0;
}
Spiral::Spiral(int ranMax,int ranMin, double a, double p)
{
    ranMax=rangeMax;
	ranMin=rangeMin;
	a=a;
	p=p;
}
void Spiral::setValues()
{
	cout<<"Input range in degrees as follows\nFrom:";
        cin>>rangeMin;
        cout<<"To:";
        cin>>rangeMax;
        double a=1, p=1;
        cout<<"To enter the formula in the form: (a*(theta)^p), \nenter the values as following\na: ";
        cin>>a;
        cout<<"p: ";
        cin>>p;

	initwindow(800, 700, "First Sample");
        for(int n=0; n<700; n++)
            {
                    putpixel(400, n, WHITE);
            }
        for(int m=0; m<800; m++)
            {
                    putpixel(m, 350, WHITE);
            }
            for(double i=rangeMin; i<rangeMax; i=i+0.01)
        {
                double theta=i;
                double r=100*(a*pow((theta*3.14/180.0), p));
                //going to cartisian coordiante system
                double x = r*cos(-theta*3.14/180.0);
                double y = r*sin(-theta*3.14/180.0);
                putpixel(x+400.0, y+350.0, RED);
        }
}
void Spiral::getGraph()
{
	
           while (!kbhit( ))
    {
        delay(200);
    }
     
    getch();
    closegraph( );
    restorecrtmode();
    
}

