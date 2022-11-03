#include<stdio.h> 
void main() {
	int num;
	printf("Input number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("%d is even number", num);
	}
	else{
		printf("%d is odd number", num);
	}
}
