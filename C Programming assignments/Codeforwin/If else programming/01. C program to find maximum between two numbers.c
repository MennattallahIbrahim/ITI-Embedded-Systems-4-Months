#include<stdio.h> 
void main() {
	int num1, num2;
	printf("Input first number:");
	scanf("%d",&num1);
	printf("Input second number:");
	scanf("%d",&num2);
	if(num1 > num2){
		printf("Maximum: %d", num1);
	} 
	else{
		printf("Maximum: %d", num2);	
  }
}
