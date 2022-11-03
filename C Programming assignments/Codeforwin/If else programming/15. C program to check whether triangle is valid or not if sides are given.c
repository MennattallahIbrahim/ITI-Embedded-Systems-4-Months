#include<stdio.h> 

void main() {
	int input1,input2,input3,sum1,sum2,sum3;
	printf("Input first side:");
	scanf("%d", &input1);
	printf("Input second side:");
	scanf("%d", &input2);
	printf("Input third side:");
	scanf("%d", &input3);
	
	
	sum1 = input2+input3;
	sum2 = input1+input3;
	sum3 = input1+input2;
	if((sum1>input1) && (sum2>input2) &&(sum3>input3) &&input1>0 && input2>0 && input3>0 ){
		printf("The triangle is valid");
			}
			else{
				printf("The triangle is not valid");
			}
}
