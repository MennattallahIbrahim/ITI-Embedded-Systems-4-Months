#include<stdio.h> 

void main() {
	int input1,input2,input3;
	printf("Input first angle:");
	scanf("%d", &input1);
	printf("Input second angle:");
	scanf("%d", &input2);
	printf("Input third angle:");
	scanf("%d", &input3);
	if((input1+input2+input3==180)){
		printf("The triangle is valid");
			}
			else{
				printf("The triangle is not valid");
			}
}	
