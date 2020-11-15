#include <stdio.h>
#include "myMath.h"

int main(){
	double x;
	printf("Please enter a real number (x): ");
	scanf("%lf", &x);

	int floor_x = (int) x;

	double res1, res2 , res3;
	res1 = (sub(add(Exponent(floor_x), Power(x, 3)), 2));
	int res1_int = (int) mul(res1, 10000);

	res2 = add(mul(x, 3), mul(Power(x, 2), 2));
	int res2_int = (int) mul(res2, 10000);

	res3 = sub(div(mul(Power(x, 3), 4), 5), mul(x, 2));
	int res3_int = (int) mul(res3, 10000);

	printf("The value of e^x + x^3 - 2 is %d.%d\n", res1_int/10000, res1_int%10000);
	printf("The value of 3x + 2x^2 is %d.%d\n", res2_int/10000, res2_int%10000);
	printf("The value of (4x^3)/5 - 2x is %d.%d\n", res3_int/10000, res3_int%10000);

	return 0;
}
