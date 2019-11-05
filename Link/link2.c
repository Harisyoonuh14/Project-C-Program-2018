#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
	char *data;
	char *key;
	struct node *next;

};

struct node *head = NULL;
struct node *current = NULL;

//display the list 
void printList()
{
	struct node *ptr = head;
	printf("8\n[ ");
	
	//start from the beginning
	while(ptr !=NULL)
	{
	   printf("(%s,%s) ",ptr->key,ptr->data);
	   ptr=ptr->next;
	}
	
	printf(" ]");
	
}

//insert link at the first location
void insertFirst(char *key,char *data)
{
	//create a link
	struct node *link = (struct node*) malloc(sizeof(struct node));
	
	link->key = key;
	link->data = data;
	
	//point it to old first node
	link->next=head;
	
	//point first to new first node
	head = link;
}

int main (){
	insertFirst("IT2300","Computer");
	insertFirst("IT2333","Acedemic");
	insertFirst("IT2400","english");
	insertFirst("IT1000","Pogramming");
	insertFirst("IT2300","Multi media");
	insertFirst("IT4300","Network");
	printf("The original Dad List:\n");
	printList();
}

