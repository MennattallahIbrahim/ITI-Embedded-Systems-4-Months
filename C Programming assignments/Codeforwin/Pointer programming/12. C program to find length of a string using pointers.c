#include <stdio.h>
#define max_size 100 //max size of string
void strnglen (char * pntr, char text [] );
void main (void){
printf("Enter your string");
char text[max_size]; 
gets(text);
char * pntr ;
pntr = text;
strnglen(pntr, text);	
}
void strnglen (char * pntr, char text [] ){
	int cntr = 0;
	for(int i=0;*pntr!='\0';i++){
		pntr++;
		cntr++;
	}
	printf("Length of string %d ",cntr);
}
