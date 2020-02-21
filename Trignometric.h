#ifndef TRIGNOMETRIC_H
#define TRIGNOMETRIC_H
#include<string>
using namespace std;
class Trignometric
{
	protected:
		double rad,rangeMax,rangeMin;
		string func;
		public:
			Trignometric();
			Trignometric(double r, double ranMax,double ranMin,string func);
			void setValues();
			void setPixel();
			void getGraph();
};

#endif
