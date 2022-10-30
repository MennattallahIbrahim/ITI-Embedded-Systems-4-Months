#include<stdio.h> 
#include<math.h>
void main() {
	float ci,p,t,r,s;
	printf("Enter principle(amount):");
	scanf("%f",&p);
	printf("Enter time:");
	scanf("%f",&t);
	printf("Enter rate:");
	scanf("%f",&r);
	s = pow((1+(r/100)),t);
	ci  = p*s;
	printf("Compound Interest = %.6f" , ci);
	}
