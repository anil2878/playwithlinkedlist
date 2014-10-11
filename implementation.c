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

int readInt()
{
    int i;      // Write properly reading the integer and display options if fails
    printf("Enter integer\n");
    scanf("  %d",&i);
    return i;
}


/*
    Creates Head
    Input:
        No Input required
    Output:
        Returns Node pointer
 
 */
Node *createHead()
{
    printf("Create Head is called\n");
    Node *ptr;
    return ptr;
}



/*
 Adds Node at the end of list
 Input: 
    head: Address of head to add
    ptr: Address of datat to append
 Output: Returns head of list
 
 */
Node * addNode_End(Node **head, void *ptr)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

Node *addNode_Begining(Node **head, void *ptr)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

Node *addNode_At_Index(Node **head, void *ptr, int index)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

Node *deleteNode_End(Node **head, void *ptr)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

Node *deleteNode_Begining(Node **head, void *ptr)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

Node *deleteNode_At_Index(Node **head, void *ptr, int index)
{
    printf("Passed ptr:%p\n",ptr);
    return *head;
}

void displayList(Node *head)
{
    printf("Passed head:%p\n",head);
}
