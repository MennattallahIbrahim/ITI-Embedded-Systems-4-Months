#include <stdio.h>
void reverse (int * ptr , int *ptr2,int arr [], int size);
void main(void){
	
int size,x;
int a=0;
int b =5;
printf("Enter the size of the array");
scanf("%d",&size);	
int arr[size];
int * ptr = arr; //points to arr[0] 
int * ptr2= &arr[size-1];

for(int i=0; i<size;i++)	
	{
	printf("Enter number %d:",i+1);	
	scanf("%d",ptr);
	ptr++; //points to the next array element
	}
ptr = arr;
printf("Array elements 1: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr); // Print value pointed by the pointer
ptr++;
}
ptr = arr; 
ptr2= &arr[size-1];
reverse(ptr,ptr2,arr,size);
}

void reverse (int * ptr , int * ptr2,int arr[] ,int size){
	int temp=0;
	for(int i=0;i<(size);i++){
	temp  = *ptr;
	*ptr  = *ptr2;
	*ptr2 = temp;
	}

ptr=arr;	
printf("Array elements 1: {");	
for(int k=0; k<size;k++){
printf("%d ", *ptr); // Print value pointed by the pointer
ptr++;
}
printf("}\n");
}
