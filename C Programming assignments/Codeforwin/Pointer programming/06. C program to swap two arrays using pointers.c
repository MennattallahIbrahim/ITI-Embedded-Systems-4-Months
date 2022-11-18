#include <stdio.h>
void swap (int * ptr , int *ptr2, int size);
void main(void){
	
int size,x;	
int a=0;
int b =5;

printf("Enter the size of the array");
scanf("%d",&size);	
int arr[size];
int arr2[size];
int * ptr = arr; //points to arr[0] 
int * ptr2 = arr2;

for(int i=0; i<size;i++)	
	{
	printf("Enter number %d:",i+1);	
	scanf("%d",ptr);
	ptr++; //points to the next array element
	}
for(int j=0; j<size;j++)	
	{
	printf("Enter number %d:",j+1);	
	scanf("%d",ptr2);
	ptr2++; //points to the next array element
	}	
ptr = arr;
ptr2 = arr2;	
printf("Array elements 1: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr); // Print value pointed by the pointer
ptr++;
}
printf("}\n");
printf("Array elements 2: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr2); // Print value pointed by the pointer
ptr2++;
}
printf("}\n");
	
ptr = arr;
ptr2 = arr2;
swap(ptr,ptr2,size);
}
void swap (int * ptr , int *ptr2, int size){
	for(int i=0;i<size;i++){
	int temp=0;
	temp  = *ptr;
	*ptr  = *ptr2;
	*ptr2 = *ptr;
	}
printf("Array elements 1: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr); // Print value pointed by the pointer
ptr++;
}
printf("}\n");
printf("Array elements 2: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr2); // Print value pointed by the pointer
ptr2++;
}
printf("}\n");
}
