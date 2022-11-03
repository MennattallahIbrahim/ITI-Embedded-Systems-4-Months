#include<stdio.h> 
void main() {
	//Char vowel or not
	char input;
	printf("Input character:");
	scanf("%c",&input);
	if(input== 'a' || input== 'e' || input== 'o' || input== 'i' || input== 'u' ||input== 'A' || input== 'E' || input== 'O' || input== 'I' || input== 'U'){
		printf("%c is vowl", input);
	}
	else if ((input>= 'a' && input <= 'z') || (input>='A' && input <='Z')){
		printf("%c is Consonant.", input);
	} else{
		printf("%c is not alphabet.", input);
	}
}
