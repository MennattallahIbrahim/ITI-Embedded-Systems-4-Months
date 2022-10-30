#include<stdio.h> 
void main() {
	float base,height,area ;
	printf("Enter base of the triangle :");
	scanf("%f", &base);
	printf("Enter hight of the triangle :");
	scanf("%f", &height);
	area  = 0.5 * base * height ;
	printf("Area of the triangle = %.2f sq. units", area );
	}
