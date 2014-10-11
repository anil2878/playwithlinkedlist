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
 Adds Node at the end of list
 Input: 
    head: Address of head to add
    ptr: Address of datat to append
 Output: Returns head of list
 
 */
int addNode_End(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    
    return 1;
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

int deleteNode_End(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int deleteNode_Begining(Node **head, void *ptr)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

int deleteNode_At_Index(Node **head, void *ptr, int index)
{
    printf("In %s\n",__FUNCTION__);
    return 1;
}

void displayList(Node *head)
{
    printf("In %s\n",__FUNCTION__);
}
