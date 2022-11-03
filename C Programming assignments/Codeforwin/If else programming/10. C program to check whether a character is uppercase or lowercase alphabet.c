#include<stdio.h> 
void main() {
	//uppercase lowercase character
	char input;
	printf("Input character:");
	scanf("%c",&input);
		if ((input>= 'a' && input <= 'z')){
		printf("%c is lowercase alphabet.", input);		
	}
	  else if (input>='A' && input <='Z'){
			printf("%c is uppercase alphabet.", input);
	}
	else{
		printf("%c is not character.", input);
	}
	}
