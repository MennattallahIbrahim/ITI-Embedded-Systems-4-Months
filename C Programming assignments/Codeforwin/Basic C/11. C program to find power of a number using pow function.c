#include<stdio.h> 
#include <math.h>
void main() {
	double base, exponent, power;
	printf("Enter base :");
	scanf("%lf", &base);
	printf("Enter exponent :");
	scanf("%lf", &exponent);
	power = pow(base , exponent) ;
	printf("%.lf ^ %.lf = %.lf", base, exponent, power );
	}
