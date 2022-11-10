#include <stdio.h>
void main (void) 
{
int i,input;
printf("Input upper range:");
scanf("%d",&input);
 for(i=1;i<=input;i++){
	if(i%2==1)
	printf("%d ",i);
 }	
}
