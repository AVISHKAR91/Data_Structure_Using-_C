#include<stdio.h>
#include<stdlib.h>

struct Node{
    int element;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element:%d\n", ptr->element);
        ptr=ptr->next;
    }
}

struct Node *deleteFromBeginning(struct Node *head)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node *));

    ptr = head;
    head=head->next;
    free(ptr);
    return head;
    
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node *));
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node *));

    ptr=head;
    temp=head->next;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        temp=temp->next;
        i++;
    }
    
    ptr->next=temp->next;
    free(temp);
    return head;
}

struct Node *deleteAtLast(struct Node *head)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node *));
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node *));
    ptr=head;
    temp=head->next;

    while(temp->next != NULL)
    {
        ptr=ptr->next;
        temp=temp->next;

    }

        ptr->next = NULL;
        free(ptr);
        return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node *));

    head->element=34;
    head->next=second;

    second->element=90;
    second->next=third;

    third->element=54;
    third->next=fourth;

    fourth->element=89;
    fourth->next=NULL;

    printf("Before deletion\n");
    LinkedListTraversal(head);

    //head=deleteFromBeginning(head);
    //head=deleteAtIndex(head, 2);
    head=deleteAtLast(head);

    printf("After deletion\n");
    LinkedListTraversal(head);
}