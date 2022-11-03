#include<stdio.h> 

void main() {
	int input1,input2,input3,sum;
	printf("Input first angle:");
	scanf("%d", &input1);
	printf("Input second angle:");
	scanf("%d", &input2);
	printf("Input third angle:");
	scanf("%d", &input3);
	sum = input1+input2+input3;
	if((sum == 180) && input1>0 && input2>0 && input3>0 ){
		printf("The triangle is valid");
			}
			else{
				printf("The triangle is not valid");
			}
}	
