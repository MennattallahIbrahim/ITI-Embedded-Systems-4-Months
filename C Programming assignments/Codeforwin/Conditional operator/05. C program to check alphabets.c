#include<stdio.h> 
void main() {
	char input;
	printf("Enter any character:");
	scanf("%c",&input);
	((input >= 'a' && input <='z') || (input >= 'A' && input <='Z')) ? printf("It is ALPHABET") : printf("It is NOT ALPHABET ")  ;
	   }
