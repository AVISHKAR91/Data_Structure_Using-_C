#include<stdio.h>
#include<stdlib.h>

    struct stack
    {
        int size;
        int top;
        int * arr;

    };

    int isEmpty(struct stack *ptr)
    {
        if(ptr->top == -1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    int isFull(struct stack *ptr)
    {
        if(ptr->top == ptr->size -1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(struct stack *ptr, int element)
    {
        if(isFull(ptr))
        {
            printf("Stack is ovrflow, cannot push %d element in stack:", element);
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top] = element;
        }
    }

    int pop(struct stack *ptr)
    {
        if(isEmpty(ptr))
        {
            printf("\nStack is underflow, cannot delete element in stack");
            return -1;
        }
        else{
           int element = ptr->arr[ptr->top];
           ptr->top--;
           return element;
        }
    }

void printstack(struct stack *ptr)
{
    printf("\nstack element is: \n");
    for(int i=0; i<=ptr->size-1; i++)
    {
      printf("%d ", ptr->arr[i]);  
    }
}

    int main()
    {
        struct stack *head = (struct stack *)malloc(sizeof(struct stack *));
        head->top=-1;
        printf("Enter size of stack:");
        scanf("%d", &head->size);
        head->arr=(int *)malloc(head->size*sizeof(int));
        printf("Stack has been created sucessfully.\n");

        push(head, 36);
        push(head, 67);
        push(head, 36);
        push(head, 67);
        push(head, 36);
        printstack(head);
        printf("\nPopped %d from the stack\n", pop(head)); // --> Last in first out!
        printf("Popped %d from the stack\n", pop(head)); // --> Last in first out!
        printf("Popped %d from the stack\n", pop(head)); // --> Last in first out!
        printstack(head);

        return 0;

    }

// #include<stdio.h>
// #include<stdlib.h>
 
// struct stack{
//     int size ;
//     int top;
//     int * arr;
// };
 
// int isEmpty(struct stack* ptr){
//     if(ptr->top == -1){
//             return 1;
//         }
//         else{
//             return 0;
//         }
// }
 
// int isFull(struct stack* ptr){
//     if(ptr->top == ptr->size - 1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// void push(struct stack* ptr, int val){
//     if(isFull(ptr)){
//         printf("Stack Overflow! Cannot push %d to the stack\n", val);
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
 
// int pop(struct stack* ptr){
//     if(isEmpty(ptr)){
//         printf("Stack Underflow! Cannot pop from the stack\n");
//         return -1;
//     }
//     else{
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }

// void printstack(struct stack *ptr)
// {
//     printf("\nstack element is: \n");
//     for(int i=0; i<=ptr->size-1; i++)
//     {
//       printf("%d ", ptr->arr[i]);  
//     }
// }
 
// int main(){
//     struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
//     sp->size = 10;
//     sp->top = -1;
//     sp->arr = (int *) malloc(sp->size * sizeof(int));
//     printf("Stack has been created successfully\n");

//     push(sp, 1);
//     push(sp, 23);
//     push(sp, 99);
//     push(sp, 75);
//     push(sp, 3);
//     push(sp, 64);
//     push(sp, 57);
//     push(sp, 46);
//     push(sp, 89);
//     push(sp, 6); // ---> Pushed 10 values 
//     // push(sp, 46); // Stack Overflow since the size of the stack is 10
//     printf("After pushing, Full: %d\n", isFull(sp));
//     printf("After pushing, Empty: %d\n", isEmpty(sp));
//     printstack(sp);
//     printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
//     printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
//     printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
//     printstack(sp);
//     return 0;
// }
