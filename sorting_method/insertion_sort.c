#include<stdio.h>

void insertionSort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j=i-1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].

    while(key < arr[j]  && j>=0)
    {
        arr[j+1] = arr[j];
        --j;
    }
    arr[j+1] = key;
    }

}

void printArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main()
{
    int arr[]= {12,54,76,45,78,4};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);
    insertionSort(arr, n);
    printf("Sorted array in ascending order:\n");
     printArray(arr, n);
}