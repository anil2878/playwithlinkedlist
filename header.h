/*
   Header file contains the declarations of functions

   */

#include<stdio.h>
#include<stdlib.h>

#define log printf("(%s):(%d)  ",__FUNCTION__, __LINE__);printf
//Implement proper logging

typedef struct node
{
    void *ptr;
    struct node *next;
}Node;

int readInt();
Node *createHead();
Node *addNode_End(Node **head, void *ptr);
Node *addNode_Begining(Node **head, void *ptr);
Node *addNode_At_Index(Node **head, void *ptr, int index);


Node *deleteNode_End(Node **head, void *ptr);
Node *deleteNode_Begining(Node **head, void *ptr);
Node *deleteNode_At_Index(Node **head, void *ptr, int index);

void displayList(Node *head);

