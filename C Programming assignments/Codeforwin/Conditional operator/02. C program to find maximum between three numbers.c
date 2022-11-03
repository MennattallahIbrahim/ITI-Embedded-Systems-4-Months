#include<stdio.h> 
void main() {
	int num1, num2, num3,max ;
	printf("Input first number:");
	scanf("%d",&num1);
	printf("Input second number:");
	scanf("%d",&num2);
	printf("Input third number:");
	scanf("%d",&num3);
	max = (num1 > num2 && num1 > num3 ) ? num1:(num2>num3 ? num2:num3 ) ; 
	printf("Maximum: %d", max);
}
