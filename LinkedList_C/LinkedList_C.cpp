// LinkedList_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<stdio.h>
#include <iostream>

struct Node
{
	int data;
	Node * next;
};
void insert(Node **node, int value);
void printList(Node* head);
void insertEnd(Node **node, int value);

//typedef  Node* node;
//typedef Node n;


int main()
{
	int choice,value;
	Node *head = NULL;// (Node*)malloc(sizeof(Node));
	/*if (head == NULL)
	{
		printf("No memmory available");
		return 0;
	}*/
	//head->data = NULL;
	//head->next = NULL;

	printf("Select Operation you want to perform");
	printf("\n 1. Insert at beginning");

	scanf_s("%d", &choice);
	while (choice != 3) {
		printf("\n 1. Insert at beginning");
		printf("\n 2. Insert at end");

		scanf_s("%d", &choice);
		//printf("\n 1. Insert at beginning");
		switch (choice)
		{
		case 1:
			
			printf("Enter value to be inserted\n");
			scanf_s("%d", &value);
			insert(&head, value);
			printList(head);
			break;

		case 2:

			printf("Enter value to be inserted\n");
			scanf_s("%d", &value);
			insertEnd(&head,value);
			//insert(&head, value,'E');
			printList(head);
			break;
		}
	}
	
	
	/*insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);*/

/*
	Node *head = (Node *)malloc(sizeof(Node));
	Node * second = (Node *)malloc(sizeof(Node));
	Node * third = (Node *)malloc(sizeof(Node));

	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;
	*///if (head != NULL)
	//{
	//	//printf("Memory allocated to start and address is %d",head);
	//	head->data = 10;
	//	head->next = NULL;

	//}
	printList(head);
	/*Node* current = head;
	while (current != NULL)
	{
		printf("%d --> ", current->data);
		current = current->next;
	}
	printf("NULL");*/
    //std::cout << "Hello World!\n"; 
}


void printList(Node *head)
{
	Node *current = head;
	while (current != NULL)
	{
		printf("%d --> ", current->data);
		current = current->next;

	}
	//printf("%d -->", current->next);
	printf("NULL");

}

void insert(Node **head,int value)
{

	Node *node = (Node*)malloc(sizeof(Node));
	node->data = value;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL; 
	} 
	else 
	{
		node->next = *head;
		*head = node;
	}/*
	else if (choice == 'E')
	{
		
		Node * current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;

	}*/

}

void insertEnd(Node **head, int value)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	//Node *current = *head;
	newNode->data = value;
	newNode->next = NULL;
	if (*head == NULL)
	{
		
		newNode = *head;
	}
	else {
		Node *current = *head;

		while (current != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
