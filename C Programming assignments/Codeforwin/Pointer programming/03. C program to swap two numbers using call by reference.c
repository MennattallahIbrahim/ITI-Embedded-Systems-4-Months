#include <stdio.h>
void swap (int * num1 ,int * num2);
void main(void){

int num1,num2;
int * ptr1 = &num1;
int * ptr2 = &num2;
printf("Input num1: ");	
scanf("%d", &num1);
printf("Input num2: ");	
scanf("%d", &num2);
printf("Before swapping:\nnum1 is: %d\nnum2 is: %d\n",num1,num2);
swap(&num1,&num2);
printf("After swapping: \nnum1 is: %d\nnum2 is: %d",num1,num2);
}

void swap (int * num1 ,int * num2){
	int temp=0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
