#include <stdio.h>
#include <stdlib.h> //to call malloc function
#include <stdbool.h>
#include "STD_Types.h"
#include "school.h"
#include <string.h>
#include "main.c"

uint16 	u16Global_Cntr=0;

//below how to create node of the list,first create a structure node
struct node{
	uint16 ID	;
	uint16 Score	;
	uint16 Day	;	
	uint16 Month	;
	uint16 Year	;
	uint8 Name		[100];
	uint8 Address	[15];
	uint8 Phone		[15];
	
	struct node* next; //pointer to next node,node is a structure,self referential structure 
};
void swap ( struct node *ptr1 , struct node *ptr2 );
struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;


void INSERT_STUDENT() 
{
	// Allocate memory for new node;
	struct node *link = (struct node*) malloc(sizeof(struct node));
	
	u16Global_Cntr++;
	
	printf("Enter ID_Student: ");
	scanf("%d",&(link->ID));
			
    printf("Enter the phone number:");
	fflush(stdin);
	fgets(link->Phone,15,stdin);
	
    
	printf("Enter Student_SCORE_Student: ");
	scanf("%d",&(link->Score));
	
	printf("Enter Address_Student: ");
	fflush(stdin);
	fgets(link->Address,15,stdin);
    
	
	printf("Enter the birth-date: \n");
	printf("Day: ");
	scanf("%d",&(link->Day));
  
	printf("Month: ");
	scanf("%d",&(link->Month));
    
	printf("Year: ");
	scanf("%d",&(link->Year));
	
	printf("Enter Name_Student: ");
	fflush(stdin);
	gets(link->Name);
  
	
	//Since we inserted this element at last of the list, make the next of the link points to NULL   
	link->next=NULL;
	
	// Check if head is empty, create new list
	if(head==NULL)
	{
		head = link;
		printf("The Student has been added succesfully. whohhoeee \n");
		main();
		return;
	}
		
	//To loop on the list to reach the last element assign the current to head
	current = head;
	//Then, while current->next not NULL, loop on the list to reach last element  
	while(current -> next != NULL)
	{
		current = current -> next;
	}
	//then assign the current pointer to next to be equal new link
	current ->next = link;
	printf("The Student has been added succesfully. whohhoeee \n");
	main();
	}

void STUDENT_LIST()
{	
	uint16  u16Loc_SL_Cntr= 1;
	//create pointer on type struct node that points to the head to loop on the list 
	struct node *ptr = head;
	if(head==NULL)
	{
		printf("The list is empty, add students to view\n\n");	
		main();
		return;
	}
	else
	{
	printf("------------------The List of Students----------------------\n");
	
	while(ptr != NULL)
	{

		
		printf("The Student NO.%d is:\n",u16Loc_SL_Cntr);
		printf("The Student ID: %d\n",ptr->ID);
		printf("The Student Name: %s\n",ptr->Name);
		printf("The Student Date: %d/%d/%d\n",ptr->Day,ptr->Month,ptr->Year);
		printf("The Student Address: %s",ptr->Address);
		printf("The Phone number is: %s",ptr->Phone);
		printf("The Student computer_science: %d\n",ptr->Score);
		ptr = ptr -> next;
		u16Loc_SL_Cntr++;
		
		printf("===========================================================\n");

	}
	
	}
	
	main();
	
}

void DELETE_STUDENT()
{
	uint16 ID_del;
	struct node * delete_node = NULL;
	
	//Check if the linked  list is empty 
	if(head==NULL)
	{
		printf("The list is empty, add students to perform actions on.\n\n");	
		main();
		return;
	}
	else
	{
	printf("Enter the Student ID that you want to delete: \n");
	scanf("%d",&ID_del);
	
	//if the first node in the linked list is the one 
	if(head -> ID == ID_del)
	{
		delete_node = head;
		//make the head points to the next node
		head = head->next;
		free(delete_node);
		u16Global_Cntr--;
		printf("The Student has been deleted succesfully. wehoheee =D");
		main();
		return; 
	}
	//if it is not the first element in the list we will enter here 
	//first assign current pointer to next address 
	current = head -> next;
	while(current != NULL) 
	{
		if(current -> ID == ID_del)
		{
			delete_node = current;
			prev->next = current -> next;
			prev = current;
			free(delete_node);
			printf("The Student has been deleted succesfully. wehoheee =D");
			main();
			return;
		}
		else 
		{
		prev = current;
		current = current-> next;
		}
	}
	//if ID not found after looping on the whole list 
	if(delete_node == NULL)
	{
		printf("The ID no: %d not found \n",ID_del);
	}
	
	}
	
	
	
}

void STUDENT_EDIT()
{	
	uint16 ID_Edit;
	//Check if the linked  list is empty 
	if(head==NULL)
	{
		printf("The list is empty, add students to perform actions on.\n\n");	
		main();
		return;
	}
	else
	{
	printf("Enter the Student ID that you want to edit: \n");
	scanf("%d",&ID_Edit);
	current = head ;
	while( current != NULL){
		if(current->ID == ID_Edit)
		{
			printf("Enter ID_Student: ");
			scanf("%d",&(current->ID));
		
			printf("Enter the phone number:");
			fflush(stdin);
			fgets(current->Phone,15,stdin);
			
			
			printf("Enter Student_SCORE_Student: ");
			scanf("%d",&(current->Score));
			
			printf("Enter Address_Student: ");
			fflush(stdin);
			fgets(current->Address,15,stdin);
			
			
			printf("Enter the birth-date: \n");
			printf("Day: ");
			scanf("%d",&(current->Day));
		
			printf("Month: ");
			scanf("%d",&(current->Month));
			
			printf("Year: ");
			scanf("%d",&(current->Year));
			
			printf("Enter Name_Student: ");
			fflush(stdin);
			gets(current->Name);
			
			main();
			
			return;
		}
		else
		{
		current = current->next;	
		}
				
	}
	printf("ID %d does not exist in th list, \n",ID_Edit);
	
	
	}
}

void STUDENT_SCORE(	)
{
	uint16 ID_Edit;
	//Check if the linked  list is empty 
	if(head==NULL)
	{
		printf("The list is empty, add students and enter their grades to perform actions on them.\n\n");	
		main();
		return;
	}
	else
	{
	printf("------------------The List of Students----------------------\n");
	current = head ;
	while( current != NULL){
	
	printf("The Student ID %d = %d\n",current->ID,current->Score);
	current = current -> next;
	}
	
	printf("===========================================================\n");
	printf("The Computer Science has been changed succesfully. weheeoooo =D \n");
	printf("===========================================================\n");
	main();
	}
}	

void RANK_STUDENT(	)
{
	uint16  u16Loc_RS_Cntr= 0; 
	//create temp struct of type node with null or 0 initialization  
	struct node *ptr1 = head  ;
	struct node *ptr2 = ptr1 -> next ;
	
	
	//Check if the linked  list is empty 
	if(head==NULL)
		{
			printf("The list is empty, add students and enter their grades to perform actions on them.\n\n");	
			main();
			return;
		}
	else
		{
			while(u16Loc_RS_Cntr<=u16Global_Cntr)
			{	
				ptr1 = head  ;
				ptr2 = ptr1 -> next ;
				while(ptr2 != NULL )
					{	
						if(ptr1-> Score < ptr2 -> Score)
							{	
								swap(ptr1,ptr2);
								
							}
						ptr1=ptr2;
						ptr2=ptr2->next;
					}
			u16Loc_RS_Cntr++;		
			}	
			STUDENT_LIST();
		}
		
}

void swap (  struct node *ptr1 , struct node *ptr2 )
{
	
	struct node *temp = (struct node*) malloc(sizeof(struct node));  ;
		
	temp->ID = ptr1->ID; 
	ptr1->ID = ptr2->ID;
	ptr2->ID = temp->ID;
	
	temp->Score = ptr1->Score; 
	ptr1->Score = ptr2->Score;
	ptr2->Score = temp->Score;
	
	strcpy(temp->Name,ptr1->Name);
	strcpy(ptr1->Name,ptr2->Name);
	strcpy(ptr2->Name,temp->Name);
	
	strcpy(temp->Phone,ptr1->Phone);
	strcpy(ptr1->Phone,ptr2->Phone);
	strcpy(ptr2->Phone,temp->Phone);
	
	strcpy(temp->Address,ptr1->Address);
	strcpy(ptr1->Address,ptr2->Address);
	strcpy(ptr2->Address,temp->Address);
		
	temp->Day = ptr1->Day; 
	ptr1->Day = ptr2->Day;
	ptr2->Day = temp->Day;
	
	temp->Month = ptr1->Month; 
	ptr1->Month = ptr2->Month;
	ptr2->Month = temp->Month;
	
	temp->Year = ptr1->Year; 
	ptr1->Year = ptr2->Year;
	ptr2->Year = temp->Year;
	
	free(temp);
}
