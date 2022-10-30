#include<stdio.h> 
void main() {
	float si,p,t,r;
	printf("Enter principle:");
	scanf("%f",&p);
	printf("Enter time:");
	scanf("%f",&t);
	printf("Enter rate:");
	scanf("%f",&r);
	si  = (p*t*r)/100 ;
	printf("Simple Interest = %.6f" , si);
	}
