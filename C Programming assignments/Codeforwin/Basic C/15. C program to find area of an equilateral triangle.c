#include<stdio.h> 
#include<math.h>
void main() {
	float side,area ;
	printf("Enter the side of the equilateral triangle :");
	scanf("%f", &side);
	area  = ((sqrt(3))/4)*(side*side) ;
	printf("Area of the equilateral triangle = %.2f sq. units", area );
	}
