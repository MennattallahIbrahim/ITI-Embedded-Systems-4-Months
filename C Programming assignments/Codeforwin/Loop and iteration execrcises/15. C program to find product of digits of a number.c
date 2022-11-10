#include <stdio.h>
#include <math.h>
void main (void) 
{
int i,input,digits,product,temp,temp2;
digits=0;
product=0;
printf("Input any number:");
scanf("%d",&input);
temp=input;
for(i=0;temp>0;i++){
	temp2=temp%10;
	temp=temp/10;
	product+=temp2 ;
	}
printf("Product of digits: %d",product);
}	
