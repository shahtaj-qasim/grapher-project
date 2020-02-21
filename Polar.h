#ifndef POLAR_H
#define POLAR_H
#include<string>
using namespace std;
class Polar
{

	private:
		double a,b,p,n;
		int rangeMin,rangeMax;
		string func;
		public:
			Polar();
			Polar(double r,double b,double p, double n, double ranMax,double ranMin,string func)
			{
				r=a;
				b=b;
				p=p;
				n=n;
				ranMin=rangeMin;
				ranMax=rangeMax;
				func=func;
			}
			void setValues();
			void setPixel();
			void getGraph();
};
#endif
