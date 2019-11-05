#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
	int data;
	int key;
	struct node *next;

};

struct node *head = NULL;
struct node *current = NULL;

//display the list 
void printList()
{
	struct node *ptr = head;
	printf("\n[ ");
	
	//start from the beginning
	while(ptr !=NULL)
	{
	   printf("(%d,%d) ",ptr->key,ptr->data);
	   ptr=ptr->next;
	}
	
	printf(" ]");
	
}

//insert link at the first location
void insertFirst(int key,int data)
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
/*=========================================================*/
//delete the first data
struct node* deleteFirst(){
	struct node *tempLink=head;
	head = head->next;
	return tempLink;
	}
bool isEmpty() {
	int length=0;
	struct node *current;
	
	for (current = head; current !=NULL; current= 
	current->next) {
		length++;
	}
	return length;
}	
/*==========================================================*/

int main (){
	insertFirst(1,10);
	insertFirst(2,20);
	insertFirst(3,30);
	insertFirst(4,40);
	insertFirst(5,50);
	insertFirst(6,60);
	printf("The original Dad List:\n");
	printList();
	
}

