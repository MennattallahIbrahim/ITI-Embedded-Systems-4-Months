#include<stdio.h> 
void main() {
	//Char alphabet or not
	char input;
	printf("Input character:");
	scanf("%c",&input);
	if((input>= 'a' && input <= 'z') || (input>='A' && input <='Z')){
		printf("%c is alphabet", input);
	}
	else{
		printf("%c is not alphabet", input);
	}
}
