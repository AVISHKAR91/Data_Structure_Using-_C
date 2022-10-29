#include<stdio.h>

void selectionSort(int *arr, int n)
{
    printf("Running selection sort:\n");
    int temp, indexofMin;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[indexofMin])
            {
                indexofMin=j;
            }
            
        }
            temp = arr[i];
            arr[i]=arr[indexofMin];
            arr[indexofMin]=temp;
    }
}

void printArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]= {3,5,2,93,82};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);//print array before  sorting
    selectionSort(arr, n);//function to sort the array
    printArray(arr, n);//print array After  sorting
    return 0;
}