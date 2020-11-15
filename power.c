#include "myMath.h"

#define e (2.71828182846)

double Exponent(int x){
	return Power(e, x);
}

double Power(double x, int y){
	double result = 1.0;
	int i;
	for (i = y; i > 0; i--){
		result *= x;
	}
	return result;
}



