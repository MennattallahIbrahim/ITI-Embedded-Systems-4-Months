#include<stdio.h> 
void main() {
	float temperature, fahrenheit;
	
	printf("Enter temperature in fahrenheit = ");
	scanf("%f", &fahrenheit);
	temperature = (fahrenheit-32)*5/9; 
	printf("Temperature in celsius = %.2f c\n" , temperature);
	}
