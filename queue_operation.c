#include<stdio.h>
#include<stdlib.h>


int arr[100];
int size;
int head = -1;
int tail = -1;

void enQueue(int element)
{
    if(tail==size-1)
    {
        printf("Queue is full!");
    }
    else{
        if(head==-1)
        {
            head=0;
        }
        tail = tail + 1;
        arr[tail]=element;
    }
}

void deQueue()
{
    if(head == -1)
    {
        printf("Queue is empty, you can't delete element");
    }
    else{
        printf("\n Deleted : %d ", arr[head]);
        head++;

        if(head>tail)
        {
            head=tail=-1;
        }
    }
}

void display()
{
    if(tail == -1)
    {
        printf("\n Queue is empty");
    }
    else{
        printf("\nQueue elements are:\n");
        for(int i=head; i<= tail; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    printf("How many element you want to insert in queue:");
    scanf("%d", &size);

    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    enQueue(9);
    display();
    deQueue();
    deQueue();
    display();

}