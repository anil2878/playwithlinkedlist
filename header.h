/*
   Header file contains the declarations of functions

   */

#include<stdio.h>
#include<stdlib.h>

#define TRUE 0
#define FALSE -1

//#define log printf("(%s):(%d)  ",__FUNCTION__, __LINE__);printf
//Implement proper logging
#define LOG( s ) printf( "(%s):(%d)%s", __FUNCTION__, __LINE__, s )
typedef struct node
{
    void *ptr;
    struct node *next;
}Node;

int readChoice();
int addNode_End(Node **head, void *ptr);
int addNode_Begining(Node **head, void *ptr);
int addNode_At_Index(Node **head, void *ptr, int index);


int deleteNode_End(Node **head);
int deleteNode_Begining(Node **head);
int deleteNode_At_Index(Node **head, int index);

void displayList(Node *head, char c);

