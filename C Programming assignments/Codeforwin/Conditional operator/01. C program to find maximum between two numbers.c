#include<stdio.h> 
void main() {
	int num1, num2,max ;
	printf("Input first number:");
	scanf("%d",&num1);
	printf("Input second number:");
	scanf("%d",&num2);
	max = (num1 > num2) ? num1:num2 ; 
	printf("Maximum: %d", max);
	}
