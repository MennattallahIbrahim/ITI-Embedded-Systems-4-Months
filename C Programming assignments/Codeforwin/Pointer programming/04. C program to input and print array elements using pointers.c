#include <stdio.h>
void main(void){
	
int size;	
int arr[size];
int * ptr = arr; //pounts to the first element address of the array 
printf("Enter the size of the array");
scanf("%d",&size);	
for(int i=0; i<size;i++)	
	{
	printf("Enter number %d:",i+1);	
	scanf("%d",ptr);
	ptr++; //points to the next array element
	}
ptr  = arr; //points to the first array of element
printf("Array elements: {");	
for(int j=0; j<size;j++){
	printf("%d ", *ptr);// Print value pointed by the pointer
	ptr++;// Move pointer to next array element
}
printf("}");	
}
