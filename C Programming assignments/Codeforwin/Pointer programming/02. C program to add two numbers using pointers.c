#include <stdio.h>

void main(void){

int sum,product,differece,quotient,num1,num2, *ptr1, *ptr2;
ptr1 = &num1;
ptr2 = &num2;
printf("Input num1: ");	
scanf("%d", ptr1);
printf("Input num2: ");	
scanf("%d", ptr2);
sum       = *ptr1 + *ptr2;
differece = (*ptr1) - (*ptr2);
quotient  = (*ptr1) / (*ptr2);
product   = (*ptr1) * (*ptr2);

printf("Sum = %d\n",sum);
printf("Difference= %d\n",differece);
printf("Product= %d\n",product); 
printf("Quotient = %d\n",quotient);	

}
