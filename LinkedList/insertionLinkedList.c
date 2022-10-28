#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int element;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while(ptr !=NULL)
    {
        printf("Element:%d\n", ptr->element);
        ptr=ptr->next;
    }
}


struct Node *insertAtBeginning(struct Node *head, int element)
{
   
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->element=element;
    ptr->next=head;
    return ptr;

}

struct Node *insertAtIndex(struct Node *head, int element, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->element=element;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertAtLast(struct Node *head, int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while(p->next!=NULL)
    {
        p=p->next;
    }

    ptr->element=element;
    p->next=ptr;
    ptr->next=NULL;
    return head;


}

struct Node *InsertAfterNode(struct Node *head, struct Node *prevNode,  int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->element=element;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;

}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->element =43;
    head->next=second;

    second->element=89;
    second->next=third;

    third->element=88;
    third->next=fourth;

    fourth->element=77;
    fourth->next=NULL;

    printf("Before insertion\n");
    linkedListTraversal(head);
    //head=insertAtBeginning(head, 26);
    //head=insertAtIndex(head, 13, 2);
    //head=insertAtLast(head,7);
    head=InsertAfterNode(head, third, 24);
    printf("After insertion\n");
    linkedListTraversal(head);


    return 0;
    
}