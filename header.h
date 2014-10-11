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

int readChoice();
int addNode_End(Node **head, void *ptr);
int addNode_Begining(Node **head, void *ptr);
int addNode_At_Index(Node **head, void *ptr, int index);


int deleteNode_End(Node **head, void *ptr);
int deleteNode_Begining(Node **head, void *ptr);
int deleteNode_At_Index(Node **head, void *ptr, int index);

void displayList(Node *head);

