#ifndef SPIRAL_H
#define SPIRAL_H
#include<string>
using namespace std;
class Spiral
{
	
	private:
		double a,p;
		int rangeMax,rangeMin;
		public:
			Spiral();
			Spiral(int ranMax,int ranMin, double a, double p);
			void setValues();
			void setPixel();
			void getGraph();
};
#endif
