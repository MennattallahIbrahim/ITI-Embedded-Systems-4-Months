#include<stdio.h> 
void main() {
	int num;
	printf("Input number:");
	scanf("%d",&num);
  if(num > 0){
		printf("%d is positive", num);
	}
	if (num <0){
		printf("%d is negative", num);
	}
	if(num == 0){
		printf("%d is Zero", num);
	}
}
