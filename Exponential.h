#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H
#include<string>
using namespace std;
class Exponential
{
	private:
		int rangeMax, rangeMin;
		double a,b;
		public:
			Exponential();
			Exponential(int, int, double, double);
			void setValues();
			void setPixels();
			void getGraph();
};
#endif
