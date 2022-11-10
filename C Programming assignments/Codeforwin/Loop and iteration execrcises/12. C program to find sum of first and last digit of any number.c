#include <stdio.h>
void main (void) 
{
int i,input,fi,sum;
fi=0;
sum=0;
printf("Input num:");
scanf("%d",&input);
fi=input%10;
printf("Last digit: %d\n",fi);
 for(i=0;input>10;i++){
	 input= input/10;
	 }
sum=fi+input;
printf("Sum of first and last digit: %d\n",sum);
}	
 
