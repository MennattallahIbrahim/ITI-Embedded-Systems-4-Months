#include <stdio.h>
void main (void) 
{
int i,input,result;
result=0;
printf("Input num:");
scanf("%d",&input);
 for(i=1;i<=10;i++){
	 result = i * input;
	printf("%d * %d = %d\n",i ,input,result);
	}
}
