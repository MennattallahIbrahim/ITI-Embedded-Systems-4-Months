#include <stdio.h>

int main(){
int num=100;
int * ptr; //declare the pointer
ptr	= &num; //initialize the ptr

printf("The address of num= %d\n",&num); //(1)
printf("The value of ptr= %d\n",ptr);	//same as (1)
printf("The address of ptr= %d\n",&ptr);
printf("The value of num= %d\n",*ptr);	

return 0;
}
