#include "Exponential.h"
#include<graphics.h>
#include<string>
#include <math.h>
#include <iostream>
#include<vector>
#include<windows.h>
#include<fstream>
Exponential::Exponential()
{
	rangeMax=0;
	rangeMin=0;
	a=0;
	b=0;
}
Exponential::Exponential(int ranMax, int ranMin, double num1, double num2)
{
	ranMax=rangeMax;
	ranMin=rangeMin;
	a=num1;
	b=num2;
}
void Exponential::setValues()
{
		cout<<"Input range in degrees as follows\nFrom:";
        cin>>rangeMin;
        cout<<"To:";
        cin>>rangeMax;
        cout<<"To enter the formula in the form: a*2.72^(b*theta), \nenter the values as following\na: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
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
                double r=1*(a*pow(2.72, b*(theta*3.14/180.0)));
                //going to cartisian coordiante system
                double x = r*cos(-theta*3.14/180.0);
                double y = r*sin(-theta*3.14/180.0);
                putpixel(x+400.0, y+350.0, RED);
        }
}
void Exponential::getGraph()
{
	while (!kbhit( ))
    {
        delay(200);
    }
     
   getch();
    closegraph( );
    restorecrtmode();
}

