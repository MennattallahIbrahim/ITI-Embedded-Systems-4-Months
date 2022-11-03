#include<stdio.h> 

void main() {
	int input1,input2,input3;
	printf("Input first side:");
	scanf("%d", &input1);
	printf("Input second side:");
	scanf("%d", &input2);
	printf("Input third side:");
	scanf("%d", &input3);
		if(input1==input2 && input2==input3){
		printf("Triangle is equilateral triangle");
			}
			else if(input1==input2 || input1==input3 || input2==input3){
				printf("The triangle is isoceles");
			}
			else if(input1<=0 || input2<=0 ||input3<=0 ){
		printf("Triangle is not valid"); 
			}
			else{
				printf("The triangle is scalene");
			}
}	
