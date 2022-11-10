#include <stdio.h>
void main (void) 
{
int i,input,digit,sum,count;
digit=0;
sum=0;
count=0;
printf("Input num:");
scanf("%d",&input);
 for(i=0;input>0;i++){
	 input= input/10;
	 count += 1;
	}
printf("Number of digits %d",count);
}
