#include<stdio.h> 
#include <math.h>
void main() {
	double number, sqr;
	
	printf("Enter any number :");
	scanf("%lf", &number);
	sqr = sqrt(number) ;
	printf("Square root of %.lf = %.2lf", number,sqr );
	}
