#include <stdio.h>
void copy (int * ptr , int * ptr2, int size );
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
	
ptr = arr;
ptr2 = arr2;
printf("Array elements 1: {");	
for(int j=0; j<size;j++){
	printf("%d ", *ptr);// Print value pointed by the pointer
	ptr++;// Move pointer to next array element
}
printf("}\n");
ptr = arr;
ptr2 = arr2;
copy(ptr,ptr2,size);

}
void copy (int * ptr , int *ptr2, int size){
printf("Array elements 2: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr); // Print value pointed by the pointer
*ptr = *ptr2;
ptr2++;
ptr++; // Move pointer to next array element
}
printf("}\n");
}
