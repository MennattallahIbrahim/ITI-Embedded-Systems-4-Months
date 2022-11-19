#include <stdio.h>
void search (int * ptr , int size, int x);
void main(void){
	
int size,x;
int a=0;
int b =5;
printf("Enter the size of the array");
scanf("%d",&size);	
int arr[size];
int * ptr = arr; //points to arr[0] 

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

printf("Enter the number you are searching: ");
scanf("%d",&x);
ptr = arr; 
search(ptr,size,x);
}

void search (int * ptr, int size, int x){
	for(int i=0;i<(size);i++){
	if(*ptr==x){
		printf("%d do exist",x);
		break;
	}
	else if (i==size-1){
		printf("This number doesn't exist");
	}
	ptr++;
	}
}
