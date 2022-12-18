#include <stdio.h>
#include "STD_Types.h"
#include "school.h"
#include <string.h>


uint8 main ()
{	
	uint16 input;
	printf("===========================================================\n");
	printf("======================= WELCOME SIR =======================\n");
	printf("===========================================================\n");
	printf("    ***************************************************    \n");
	printf("    ******************* Mennatallah *******************    \n");
	printf("    ***************************************************    \n\n");
	printf("-----------------------------------------------------------\n");
	printf("Choose one of the following options:\nTo add a new student			Enter '1'\nTo view all students			Enter '2'\nTo delete a student			Enter '3'\nTo update student			Enter '4'\nTo rank the students			Enter '5'\nTo student score			Enter '6'\nTo exist the school app			Enter '7'\n");
	printf("-----------------------------------------------------------\n\n");
	printf("----->Your choice is: ");
	scanf("%d",&input);
	if(input==1)
	{
		INSERT_STUDENT(	);
	}
	else if(input==2)
	{
		STUDENT_LIST(	);
	}
	else if(input==3)
	{
		DELETE_STUDENT(	);
	}
	else if(input==4)
	{
		STUDENT_EDIT(	);
	}
	else if(input==5)
	{
		RANK_STUDENT(	);
	}
	else if(input==6)
	{
		STUDENT_SCORE();
	}
	else if(input==7)
	{
		//Do Nothing 
	}
	else
	{
		printf("Please enter a valid number.");
		
	}
	
}
