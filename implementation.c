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
    printf("7. Reverse List\n");
    printf("8. Lenght of the List\n");
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
 Output: Returns TRUE of FALSE
 
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

/*
 Adds Node at the begining of list
 Input:
    head: Address of head to add
    ptr: Address of datat to append
 Output: Returns TRUE of FALSE
 
 */

int addNode_Begining(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    Node *node = createNode(ptr);
    if (!head) {
        printf("NULL is passed\n");
        return FALSE;
    }
    if (!node) {
        printf("Not enough memory\n");
        return FALSE;
    }
    //Head creation
    if (!(*head)) {
        (*head) = node;
        return TRUE;
    }
    node->next = (*head);
    (*head) = node;
    return 1;
}

/*
 Adds Node after n elements
 Input:
    head: Address of head to add
    ptr: Address of datat to append
    index: index where to add
 Output: Returns TRUE of FALSE
 
 */

int addNode_At_Index(Node **head, void *ptr, int index)
{
    printf("In %s\n",__FUNCTION__);
    Node *node;
    Node *tmp = NULL;
    if (index<0) {
        LOG("Invalid index : %d",index);
        return FALSE;
    }
    node = createNode(ptr);
    if (!node) {
        LOG("Not enough memory",NULL);
        return FALSE;
    }
    if (!index) {
        node->next = (*head);
        (*head) = node;
        return TRUE;
    }
    if (!(*head)) {
        (*head) = node;
        return TRUE;
    }
    tmp = (*head);
    index--;
    while (index-- && tmp->next ) {
        tmp = tmp->next;
    }
    node->next = tmp->next;
    tmp->next = node;
    return TRUE;
}

int deleteNode_End(Node **head)
{
    printf("In %s\n",__FUNCTION__);
    Node *tmp= NULL;
    if (!head) {
        LOG("NULL passed",NULL);
        return FALSE;
    }
    if ((!(*head)) || !((*head)->next) ) {
        LOG("Head is NULL",NULL);
        if (*head) {
            free((*head));
            (*head) = NULL;
        }
        return TRUE;
    }
    tmp = (*head);
    while (tmp->next->next) {
        tmp = tmp->next;
    }
    free(tmp->next);
    tmp->next = NULL;
    return TRUE;
}

int deleteNode_Begining(Node **head)
{
    printf("In %s\n",__FUNCTION__);
    Node *tmp= NULL;
    if (!head) {
        LOG("NULL passed",NULL);
        return FALSE;
    }
    if ((!(*head))) {
        LOG("Head is NULL",NULL);
        return TRUE;
    }
    tmp = (*head);
    (*head) = (*head)->next;
    free(tmp);
    return TRUE;
}

int deleteNode_At_Index(Node **head, int index)
{
    printf("In %s\n",__FUNCTION__);
    Node *tmp= NULL, *ftmp;
    if (!head) {
        LOG("NULL passed",NULL);
        return FALSE;
    }
    if ((!(*head))) {
        LOG("Head is NULL",NULL);
        return TRUE;
    }
    index--;
    if (index<1) {
        return deleteNode_Begining(head);
    }
    //index--;
    tmp = (*head);
    while (index-- && tmp->next) {
        tmp = tmp->next;
    }
    if (tmp->next) {
        ftmp = tmp->next;
        tmp->next = tmp->next->next;
        free(ftmp);
        return TRUE;
    }
    return TRUE;
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

int lengthList(Node *head)
{
    int len=0;
    if (!head) {
        return len;
    }
    len++;
    while (head->next) {
        head = head->next;
        len++;
    }
    return len;
}


void reverseList(Node **head)
{
    LOG(" Entering ",NULL);
    Node *curr=NULL, *prev=NULL, *next=NULL;
    if (!head) {
        LOG("NULL passed",NULL);
        return;
    }
    if ((!(*head))) {
        LOG("Head is NULL",NULL);
        return;
    }
    curr = (*head);
    while (curr->next) {
        next = curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
    }
    curr->next=prev;
    (*head) = curr;
}
