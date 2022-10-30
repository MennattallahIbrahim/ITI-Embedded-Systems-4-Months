#include<stdio.h> 
void main() {
	int days, day , years, weeks;
	
	printf("Enter days =  ");
	scanf("%d", &days);
	years = days/365; 
	weeks = (days - (365*years))/7;
	day = days - ((years*365) + (weeks*7));
	printf("%d days = %d years, %d weeks and %d days", days,years,weeks,day);
	}
