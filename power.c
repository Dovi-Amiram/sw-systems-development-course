#include "myMath.h"

#define e (2.71828182846)

double Exponent(int x){
        return Power(e, x);
}

double Power(double x, int y){
        int abs, j;
        if (y >= 0)
		abs = y;
        else abs = -1*y;
        
        double result = 1.0;
       
        for (j = abs; j > 0; j--){
            if (y >= 0)
                result *= x;
            else result /= x;
        }
        return result;
}
