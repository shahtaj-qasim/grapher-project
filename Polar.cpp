#include "Polar.h"
#include<graphics.h>
#include<string>
#include <math.h>
#include <iostream>
#include<vector>
#include<windows.h>
#include<fstream>
Polar::Polar()
{
    a=0;
	b=0;
	p=0;
	n=0;
	rangeMax=0;
	rangeMin=0;
	func="";
}
void Polar::setValues()
{
	int rangeMax,rangeMin;
double n=0, b=0, p=0;
        double a=0;
         cout<<"Input range in degrees as follows\nFrom:";
        cin>>rangeMin;
        cout<<"To:";
        cin>>rangeMax;
        string func=" ";
        cout<<"To enter the formula in the form: (a+(b*(func(n*theta))^p)), \nenter the values as following\na: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"n: ";
        cin>>n;
        cout<<"p: ";
        cin>>p;
        cout<<"function: ";
        cin>>func;

	initwindow(800, 700, "First Sample");
        
        for(int n=0; n<700; n++)//vertical axis
            {
                    putpixel(400, n, WHITE);
            }
        for(int m=0; m<800; m++)//horizontal axis
            {
                    putpixel(m, 350, WHITE);
        }	
        for(double i=rangeMin; i<rangeMax; i=i+0.01)
        {
                double theta=i;
                double r;
                if (func=="cos")
                {
                     r=100*(a+(b*pow((cos(n*theta*3.14/180.0)), p)));
                }
                else if (func=="sin")
                {
                     r=100*(a+(b*pow((sin(n*theta*3.14/180.0)), p)));
                }
                //going to cartisian coordiante system
                double x = r*cos(theta*3.14/180.0);
                double y = r*sin(theta*3.14/180.0);
                putpixel(x+400.0, y+350.0, RED);
        }
}
void Polar::getGraph(){
	
         while (!kbhit( ))
    {
        delay(200);
    }
     
    getch();
    closegraph( );
    restorecrtmode();

}

