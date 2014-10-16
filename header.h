/*
   Header file contains the declarations of functions

   */

#include<stdio.h>
#include<stdlib.h>

#define TRUE 0
#define FALSE -1

#define LOG(formatstring,... ) printf( "(%s):(%d)" formatstring"\n", __FUNCTION__, __LINE__, __VA_ARGS__)

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
int lengthList(Node *head);
void reverseList(Node **head);
