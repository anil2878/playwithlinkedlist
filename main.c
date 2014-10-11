#include"header.h"

int main()
{
    Node *head=NULL;
    int i;
    void *ptr=NULL;
    while (1) {
        i = readChoice();
        printf("Recieved:%d\n",i);
        switch (i) {
            case 0:
                printf("Displaying List\n");
                displayList(head);
                break;
            case 1:
                printf("Adding Node at Begining\n");
                i = addNode_Begining(&head, ptr);
                break;
            case 2:
                printf("Adding Node at End\n");
                i = addNode_End(&head, ptr);
                break;
            case 3:
                printf("Adding Node at Index\n");
                printf("Enter Index\n");
                scanf("%d",&i);
                i = addNode_At_Index(&head, ptr,i);
                break;
            case 4:
                printf("Deleting Node at Begining\n");
                i = deleteNode_Begining(&head, ptr);
                
                break;
            case 5:
                printf("Deleting Node at End\n");
                i = deleteNode_End(&head, ptr);
                
                break;
            case 6:
                printf("Deleting Node at Index\n");
                printf("Enter Index\n");
                scanf("%d",&i);
                i = deleteNode_At_Index(&head, ptr,i);
                break;
            default:
                printf("Enter choice between 0 to 6");
                break;
        }

    }
}
