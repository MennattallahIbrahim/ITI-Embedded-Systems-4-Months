#include<stdio.h> 
	void main (){
	int first,second,sum,difference,product,quotient,modulus;

	printf("First number:");
	scanf("%d", &first );
	printf("Second number:");
	scanf("%d", &second );
	sum        = first + second ; 
	difference = first -second;
    product    =	first * second ;
	quotient   = first / second ;
	modulus    = first % second ; 
	printf("Sum = %d \n", sum);
	printf("Difference = %d \n", difference );
	printf("Product = %d \n" , product);
	printf("Quotient = %d \n", quotient);
	printf("Modulus = %d" , modulus );	
}
