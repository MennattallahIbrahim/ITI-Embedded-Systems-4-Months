#include <stdio.h>
#define max_size 100 //max size of string
void strnglen (char * pntr, char * pntr2  );
void main (void){

printf("Enter your string: ");
char text[max_size]; 
char text2[max_size]; 
gets(text);
char * pntr ;
char * pntr2 ;
pntr = text;
pntr2 = text2;
strnglen(pntr, pntr2);	
printf("First string  = %s\n", text);
printf("Second string = %s\n", text2);
}
void strnglen (char * pntr, char * pntr2  ){
	
	for(int i=0;*pntr!='\0';i++){
		*pntr2 = *pntr;
		pntr++;
		pntr2++;
	}
}
