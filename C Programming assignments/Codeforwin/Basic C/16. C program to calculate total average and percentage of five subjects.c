#include<stdio.h> 
void main() {
	int n1,n2,n3,n4,n5;
	float total,average,percentage;
	printf("Enter marks of five subjects:");
	scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
	total  = n1+n2+n3+n4+n5 ;
	average = total/5;
	percentage = (total/500)*100;
	printf("Total = %.2f \n Average = %.2f \n Percentage = %.2f", total,average,percentage);
	}
