#include <stdio.h>
#include <math.h>
void main (void) 
{
int i,input,lastd,firstd,count,temp,s;
firstd=0;
lastd=0;
count=0;
temp=0;
printf("Input num:");
scanf("%d",&input);
firstd=input;
lastd=input%10;
printf("Last digit: %d\n",lastd);
 for(i=0;firstd>10;i++){
	 firstd= firstd/10;
	 count+=1;
	 }
s= pow(10,count);	 
temp=lastd*pow(10,count);
temp = temp+(input% s );
temp=temp-lastd; 
temp=temp+firstd;
printf("Number after swapping first and last digit: %d\n",temp);
}	
