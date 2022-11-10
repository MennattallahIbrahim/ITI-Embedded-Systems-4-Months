#include <stdio.h>
#include <math.h>
void main (void) 
{
int i,input,reverse,temp,temp2,c1,c2,c3,c4,c5,c6,c7,c8,c9,c0,freq;
reverse=0;
freq=0;
c1=0;
c2=0;
c3=0;
c4=0;
c5=0;
c6=0;
c7=0;
c8=0;
c9=0;
c0=0;
printf("Input any number:");
scanf("%d",&input);
temp=input;
for(i=0;temp>0;i++){
	reverse = reverse*10;
	temp2 =temp%10;
	if(temp2==1){
		c1+=1;
	}
	else if(temp2==2){
		c2+=1;
	}
	else if(temp2==3){
		c3+=1;
	}
	else if(temp2==4){
		c4+=1;
	}
	else if(temp2==5){
		c5+=1;
	}
	else if(temp2==6){
		c6+=1;
	}
	else if(temp2==7){
		c7+=1;
	}
	else if(temp2==8){
		c8+=1;
	}else if(temp2==9){
		c9+=1;
	}
	reverse = reverse+temp2;
	temp=temp/10;
	}
printf("Frequency of 0=%d\nFrequency of 1=%d\nFrequency of 2=%d\nFrequency of 3=%d\nFrequency of 4=%d\nFrequency of 5=%d\nFrequency of 6=%d\nFrequency of 7=%d\nFrequency of 8=%d\nFrequency of 9=%d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
}
