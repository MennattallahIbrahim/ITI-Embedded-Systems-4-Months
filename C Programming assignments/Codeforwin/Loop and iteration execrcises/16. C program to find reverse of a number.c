#include <stdio.h>
#include <math.h>
void main (void) 
{
int i,input,reverse,temp;
reverse=0;
printf("Input any number:");
scanf("%d",&input);
temp=input;
for(i=0;temp>0;i++){
	reverse = reverse*10;
	reverse = reverse+(temp%10);
	temp=temp/10;
	}
printf("Reverse of %d is %d",input,reverse);
}
