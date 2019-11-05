#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include<conio.h>

struct node{
	char *data;
	char *key;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the ist

void printList(){
	struct node *ptr = head;
	printf("\n[\n");
	
	while(ptr != NULL){
		printf("(%s,%s)\n", ptr->key,ptr->data);
		ptr = ptr->next;
	}
	
	printf(" ]");
}

//insert link at the first location

void insertFirst(char *key,char *data){
	//create a link
	struct node *link = (struct node*) malloc(sizeof(struct node));

	link->key = key;
	link->data = data;
	
	//point it to old first node
	link->next = head;
	
	//point first to new first node
	head = link;


}

//delete first item;
struct node* deleteFirst(){
	//save reference to first link
	struct node *templink = head;
	
	//mark nect to first link ad first
	head = head->next;
	
	//return the deleted link
	return templink;
	
}
	//is list empty
	bool isEmpty(){
		return head == NULL;
	}
	
	int length(){
		int length = 0;
		struct node *current;
		
		
		for(current = head; current != NULL; current = current->next)
		{
			length++;
		}
		
		return length;
	}
	
//	
//	
//	//find a link with given key
//	struct node* find(int key){
//	
//	//start from the first link
//	struct node* current = head;
//	
//	//if list is empty
//	if(head==NULL)
//	{
//		return NULL;
//	}
//	
//	//navigate through list
//	while(current->key != key){
//		
//		//if it is last node
//		if(current->next == NULL){
//			return NULL;
//		}else{
//			//go to next link
//			current = current->next;
//		}
//	}
//	
//	//if data found, return the current link
//	return current;
//}

/*

//delte a link with given key
struct node* deletefirst(char key){
	
	//start from the first link
	struct node* current = head;
	struct node* previous = NULL;
	
	//if list is empty
	if(head == NULL){
		return NULL;
	}
	
	//navigate through list
	while(current->key != key){
		
		//if it is last node
		if(current->next ==NULL){
			return NULL;
		}else{
			//store reference tp current link
			previous = current;
			
			//mode to nect link
			current = current->next;
		}
	}
	
	//found a math, update the link
	if(current == head){
		//chane first to point to next link
		head = head->next;
	}else{
		//bypass the crrent link
		previous->next = current->next;
	}
	
	return current;
}

*/

//void sort(){
//	int i,j,k,tempkey,tempdata;
//	struct node *current;
//	struct node *next;
//	
//	int size =length();
//	k = size;
//	for(i=0; i<size - 1; i++, k--){
//		current = head; 
//		next = head->next;
//		
//		for( j=1; j<k;j++){
//			if(current->data > next->data){
//				tempdata = current->data;
//				current->data = next->data;
//				next->key = tempkey;
//			}
//			
//			current = current->next;
//			next = next->next;
//		}
//	}
//}

void reverse(struct node** head_raf){
	struct node* prev = NULL;
	struct node* current = *head_raf;
	struct node* next;
	
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	
	*head_raf = prev;
}


main(){
	insertFirst("IT2301-310","Computer Network and Internet Technology");
	insertFirst("IT2301-314","Multimedia System Fundamental");
	insertFirst("IT2301-316","E-Business System");
	insertFirst("IT2301-305","Computer Architecture and Operating System");
	insertFirst("IT2301-306","Data Structure and Algorithm Analysis");
	
	printList();
	printf("\n\npress Enter to continue !!!!");
//	while(!isEmpty()){
//		struct node *templink = deleteFirst();
//		
//	}
//	printf("have been deleted");

	getch();
	system("cls");
	int i,j,number;
	char* code[5][5], title[5][5];
	printf("how many subject do you want to add ? \n");
	scanf("%d",&number);
	
	
	char* subject[5][5];
	for (i=0; i<number; i++){
		for (j=0; j<2; j++){
		printf("enter the course ID : ");
		scanf("%s",&subject[i][j]);
		
		j++;
		
		printf("enter the tittle : ");
		scanf("%s",&subject[i][j]);
		
		
		}
    }
    
    system("cls");
    printf("list of the subject\n");
    for (i=0; i<number; i++){
		for (j=0; j<2; j++){
		printf("%s,",&subject[i][j]);
		
		}
		printf("\n");
		}
	
	}
	
	
	
	
	
	
	
	




