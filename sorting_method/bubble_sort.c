#include<stdio.h>

void bubbleSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)//for number of pass
    {
        for(int j=0; j<n-1-i; j++)//for comparison in  each pass
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

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
    printArray(arr, n);//print array before  sorting
    bubbleSort(arr, n);//function to sort the array
    printArray(arr, n);//print array After  sorting
    return 0;

}