#include<stdio.h> 
void main() {
	double angle1,angle2, angle3;
	printf("Enter first angle :");
	scanf("%lf", &angle1);
	printf("Enter first angle :");
	scanf("%lf", &angle2);
	angle3  = 180-(angle1+angle2) ;
	printf("Third angle = %.2lf", angle3 );
	}
