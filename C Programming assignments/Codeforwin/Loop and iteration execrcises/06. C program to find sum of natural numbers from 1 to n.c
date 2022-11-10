#include <stdio.h>
void main (void) 
{
int i,input,sum;
sum=0;
printf("Input upper limit:");
scanf("%d",&input);
 for(i=1;i<=input;i++){
	sum +=i;
 }	
 printf("Sum of natural numbers 1-10: %d ",sum);
}
