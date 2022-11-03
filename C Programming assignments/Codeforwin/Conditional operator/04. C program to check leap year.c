#include<stdio.h> 
void main() {
	int year;
	printf("Input year:");
	scanf("%d",&year);
	(year%4 == 0 && year%100 != 0 || year%400 == 0) ? printf("%d is Leap Year", year) : printf("%d is a common year ", year)  ;
	   }
