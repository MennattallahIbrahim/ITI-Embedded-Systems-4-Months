#include <stdio.h>
#include <math.h>
void main (void) 
{
int i,input,digits,sum,temp,temp2;
sum=0;
digits=0;
printf("Input any number:");
scanf("%d",&input);
temp=input;
for(i=0;temp>0;i++){
	temp2=temp%10;
	temp=temp/10;
	sum+=temp2 ;
	}
printf("Sum of digits: %d",sum);
}
