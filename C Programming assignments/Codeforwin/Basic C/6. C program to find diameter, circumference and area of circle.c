#include<stdio.h> 
#define  pi  3.14
void main() {
	float radius, diameter,circumference, Area;
	
	printf("Enter radius:");
	scanf("%f", &radius );
	diameter = 2*radius;
	circumference = 2*pi*radius ; 
	Area = pi * (radius*radius) ; 
	printf("Diameter:%.2f units \n" , diameter);
	printf("Circumference = %.2f units\n", circumference);
	printf("Area = %.2f sq. units", Area);
	}
	
