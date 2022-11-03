#include<stdio.h> 
void main() {
	//char,digit,special character
	char input;
	printf("Input character:");
	scanf("%c",&input);
	if ((input>= 'a' && input <= 'z') || (input>='A' && input <='Z')){
		printf("%c is alphabet.", input);		
	}
	  else if (input >= '0' && input <= '9'){
		printf("%c is digit.", input);
	}
	else{
		printf("%c is special character.", input);
	}
}
