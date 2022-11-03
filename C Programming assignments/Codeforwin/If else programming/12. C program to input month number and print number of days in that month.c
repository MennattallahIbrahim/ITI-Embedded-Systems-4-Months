#include<stdio.h> 
void main() {
	//number of days in month
	int month;
	printf("Enter month number:");
	scanf("%d",&month);
	if(month == 1|| month == 3||month == 7||month == 8||month == 10||month == 12)
    {
	printf("It contains 31 days");
	}
	else if (month ==2){
		printf("It contains 28/29 days");
	}
	else if(month == 4|| month == 6||month == 9||month == 11){
		printf("It contains 30 days");
	}
	else{
		printf("Enter valid number between 1-12");
	}
	}
