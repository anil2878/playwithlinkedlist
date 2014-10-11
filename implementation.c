//
//  implementation.c
//  sb
//
//  Created by ankireddy anil kumar on 11/10/14.
//  Copyright (c) 2014 test. All rights reserved.
//

#include "header.h"

/*
 No Input
 Returns Integer
 */

int readChoice()
{
    int i;      // Write properly reading the integer and display options if fails
    printf("\n\n0. Display list\n");
    printf("1. Add Node at the Begining\n");
    printf("2. Add Node at the End\n");
    printf("3. Add Node at index\n");
    printf("4. Delete Node at the Begining\n");
    printf("5. Delete Node at the End\n");
    printf("6. Delete Node at the Index\n");
    printf("Enter Choice\n");
    
    scanf("  %d",&i);
    return i;
}

/*
 Internal function to create node
 */
 
Node *createNode(void *ptr)
{
    Node* node = (Node *)malloc(sizeof(Node *));
    if (!node) {
        return node;
    }
    node->ptr = ptr;
    node->next = NULL;
    return node;
}

/*
 Adds Node at the end of list
 Input: 
    head: Address of head to add
    ptr: Address of datat to append
 Output: Returns head of list
 
 */
int addNode_End(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    Node *tmp = NULL;
    Node *node = createNode(ptr);
    if (!head) {
        printf("NULL is passed\n");
        return FALSE;
    }
    if (!node) {
        printf("Not enough memory\n");
        return FALSE;
    }
    tmp = *head;
    //Head creation
    if (!(*head)) {
        (*head) = node;
        return TRUE;
    }
    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = node;
    return TRUE;
}

int addNode_Begining(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int addNode_At_Index(Node **head, void *ptr, int index)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int deleteNode_End(Node **head)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int deleteNode_Begining(Node **head)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int deleteNode_At_Index(Node **head, int index)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

void displayList(Node *head, char c)
{
    printf("In %s\n",__FUNCTION__);
    printf("List is \n");
    switch (c) {
        case 'i':
            while (head) {
                printf("data: %d   next:%p \n", *((int *)(head->ptr)) ,head->next);
                head = head->next;
            }
            break;
        case 'c':
            while (head) {
                printf("string: %s   next:%p \n", ((char *)(head->ptr)) ,head->next);
                head = head->next;
            }
            break;
            
        default:
            printf("The format is not supported\n");
            break;
    }
    
}
