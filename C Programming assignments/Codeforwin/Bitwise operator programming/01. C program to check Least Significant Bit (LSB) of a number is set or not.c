#include<stdio.h> 
void main() {
	int num;
	printf("Input number:");
	scanf("%d",&num);
		if(num&1==1){
			printf("Least Significant Bit of %d is set (1).",num);
		}
		else {
			printf("Least Significant Bit of %d is set (0).",num);
		}
		}
