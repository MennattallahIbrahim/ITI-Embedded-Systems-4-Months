#include<stdio.h> 
void main() {
	//number of days in month
	int month;
	printf("Enter month number:");
	scanf("%d",&month);
	switch(month) {
		case 1 : printf("It contains 31 days");
		break;
		case 2	: printf("It contains 28/29 days");
		break;
		case 3 : printf("It contains 31 days");
		break;
		case 4 : printf("It contains 30 days");
		break;
		case 5 : printf("It contains 31 days");
		break;
		case 6 : printf("It contains 30 days");
		break;
		case 7 : printf("It contains 31 days");
		break;
		case 8 : printf("It contains 31 days");
		break;
		case 9 : printf("It contains 30 days");
		break;
		case 10 : printf("It contains 31 days");
		break;
		case 11 : printf("It contains 30 days");
		break;
		case 12 : printf("It contains 31 days");
		break;
		}
		}
