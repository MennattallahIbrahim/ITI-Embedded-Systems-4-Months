#include<stdio.h> 
void main() {
	int num1;
	printf("Input number:");
	scanf("%d",&num1);
		switch(num1>0 ) {
		case 1   : printf("%d is positive",num1);
		           break; 
		case 0   : 
		      switch(num1 < 0){
				  case 1 : printf("%d is negative",num1);
		           break; 
				   case 0 : printf("%d is zero",num1);
				   break;
			  }
	    }
		}
		
