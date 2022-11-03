#include<stdio.h> 

void main() {
	int cost,selling,profit;
	printf("Input cost price:");
	scanf("%d", &cost);
	printf("Input selling price:");
	scanf("%d", &selling);
	profit = selling - cost;
		if(cost == selling){
		printf("No profit");
			}
			else if(selling-cost <0 ){
				printf("There's loss equal to %d",profit);
			}
			else {
		printf("Profit: %d",profit); 
			}
			}	
