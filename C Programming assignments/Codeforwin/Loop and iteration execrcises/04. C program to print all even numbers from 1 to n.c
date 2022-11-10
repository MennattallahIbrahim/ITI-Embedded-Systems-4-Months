#include <stdio.h>
void main (void) 
{
int i,input;
printf("Input upper range:");
scanf("%d",&input);
 for(i=2;i<=input;i++){
	if(i%2==0)
	printf("%d ",i);
 }	
}
