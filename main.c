#include"header.h"

int main()
{
    Node *head=NULL;
    int i,j;
    int *ptr;
    while (1) {
        i = readChoice();
        //LOG("Recieved:\n");
        switch (i) {
            case 0:
                LOG("Displaying List\n");
                displayList(head,'i');
                break;
            case 1:
                LOG("Adding Node at Begining\n");
                ptr =(int *)malloc(sizeof(int));
                LOG("Enter data to add\n");
                scanf("%d",ptr);
                i = addNode_Begining(&head, (void *)ptr);
                break;
            case 2:
                LOG("Adding Node at End\n");
                ptr =(int *)malloc(sizeof(int));
                LOG("Enter data to add\n");
                scanf("%d",ptr);
                i = addNode_End(&head, (void *)ptr);
                break;
            case 3:
                LOG("Adding Node at Index\n");
                ptr =(int *)malloc(sizeof(int));                
                LOG("Enter data to add\n");
                scanf("%d",ptr);
                LOG("Enter Index\n");
                scanf("%d",&j);
                i = addNode_At_Index(&head, (void *)ptr,j);
                break;
            case 4:
                LOG("Deleting Node at Begining\n");
                i = deleteNode_Begining(&head);
                
                break;
            case 5:
                LOG("Deleting Node at End\n");
                i = deleteNode_End(&head);
                
                break;
            case 6:
                LOG("Deleting Node at Index\n");
                LOG("Enter Index\n");
                scanf("%d",&i);
                i = deleteNode_At_Index(&head,i);
                break;
            default:
                LOG("Enter choice between 0 to 6");
                break;
        }

    }
}
