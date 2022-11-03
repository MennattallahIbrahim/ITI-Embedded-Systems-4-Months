#include<stdio.h> 
void main() {
	int num;
	printf("Input number:");
	scanf("%d",&num);
	(num%2 == 0 ) ? printf("%d is even", num) : printf("%d is odd", num)  ;
}
