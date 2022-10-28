#include<stdio.h>
#include<stdlib.h>

struct Node{
    int element;
    struct Node *prev;
    struct Node *next;
};

void displayForward(struct Node *Head)
{  
    struct Node *ptr =Head;
    while(ptr != NULL)
    {
        printf("Element:%d\n", ptr->element);
        ptr=ptr->next;
    }

}

void displayBackward(struct Node *Last)
{   
    struct Node *ptr = Last;
    
    while(ptr!=NULL)
    {
        printf("Element:%d\n", ptr->element);
        ptr=ptr->prev;
    }

}



int main()
{
    struct Node *Head= (struct Node *)malloc(sizeof(struct Node));
    struct Node *N2= (struct Node *)malloc(sizeof(struct Node));
    struct Node *N3= (struct Node *)malloc(sizeof(struct Node));
    struct Node *Last= (struct Node *)malloc(sizeof(struct Node));


    //Forward Traversal;
    Head->element=5;
    Head->next=N2;
    N2->element=67;
    N2->next=N3;
    N3->element=78;
    N3->next=Last;
    Last->element=98;
    Last->next = NULL;

    //Backward Traversal
    
    Last->prev=N3;
    N3->prev=N2;
    N2->prev=Head;
    Head->prev=NULL;



    printf("Forward travaersal\n");
    displayForward(Head);

    printf("Backward travaersal\n");
    displayBackward(Last);





}