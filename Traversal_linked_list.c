#include<stdio.h>
#include<stdlib.h>
struct Node {
    int element;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element:%d\n", ptr->element);
        ptr=ptr->next;

    }

}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct  Node *)malloc(sizeof(struct Node));
    second = (struct  Node *)malloc(sizeof(struct Node));
    third = (struct  Node *)malloc(sizeof(struct Node));

    head->element=23;
    head->next=second;

    second->element=43;
    second->next=third;

    third->element=44;
    third->next=NULL;

    linkedListTraversal(head);

    return 0;
    
}