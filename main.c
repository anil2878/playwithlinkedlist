#include"header.h"

int main()
{
    Node *head=NULL;
    int i,j;
    int *ptr;
    while (1) {
        i = readChoice();
        LOG("Recieved choice:%d",i);
        switch (i) {
            case 0:
                LOG("Displaying List",NULL);
                displayList(head,'i');
                break;
            case 1:
                LOG("Adding Node at Begining",NULL);
                ptr =(int *)malloc(sizeof(int));
                LOG("Enter data to add",NULL);
                scanf("%d",ptr);
                i = addNode_Begining(&head, (void *)ptr);
                break;
            case 2:
                LOG("Adding Node at End",NULL);
                ptr =(int *)malloc(sizeof(int));
                LOG("Enter data to add",NULL);
                scanf("%d",ptr);
                i = addNode_End(&head, (void *)ptr);
                break;
            case 3:
                LOG("Adding Node at Index",NULL);
                ptr =(int *)malloc(sizeof(int));                
                LOG("Enter data to add",NULL);
                scanf("%d",ptr);
                LOG("Enter Index",NULL);
                scanf("%d",&j);
                i = addNode_At_Index(&head, (void *)ptr,j);
                break;
            case 4:
                LOG("Deleting Node at Begining",NULL);
                i = deleteNode_Begining(&head);
                
                break;
            case 5:
                LOG("Deleting Node at End",NULL);
                i = deleteNode_End(&head);
                
                break;
            case 6:
                LOG("Deleting Node at Index",NULL);
                LOG("Enter Index",NULL);
                scanf("%d",&i);
                i = deleteNode_At_Index(&head,i);
                break;
            case 7:
                LOG("Reversing List",NULL);
                reverseList(&head);
                break;
            case 8:
                LOG("Length of the List is %d", lengthList(head));
                break;
            default:
                LOG("Enter choice between 0 to 8",NULL);
                break;
        }
    }
}
