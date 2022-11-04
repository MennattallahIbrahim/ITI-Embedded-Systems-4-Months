#include<stdio.h> 
void main() {
	int num,bits,msb;
	printf("Input number:");
	scanf("%d",&num);
	bits = (sizeof(int)) * 8;
	
	msb = 1 << (bits-1) ;
		if(num & msb){
			printf("Most Significant Bit of %d is set (1).",num);
		}
		else {
			printf("Most Significant Bit of %d is set (0).",num);
		}
		}
