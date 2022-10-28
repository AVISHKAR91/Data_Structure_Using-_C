#include<stdio.h>

int search(int arr[], int size, int k)
{
    // Going throuh array successfully
    for (int i=0; i<=size; i++)
    {
        if(arr[i] == k)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int arr[] = {2,4,6,8,10};
    int k;//key for searching
    int size = sizeof(arr)/sizeof(arr[0]);
    //int size;
    int result;

    // printf("How much element you want to insert:");
    // scanf("%d", &size);

    // for(int i=1; i<=size; i++)
    // {
    //     printf("Enter %d element:", i);
    //     scanf("%d", &arr[i]);
    // }

    printf("Which element you want to search:");
    scanf("%d", &k);

    result = search(arr, size, k);

    (result == -1) ? printf("Element not found") : printf("Element found at index:%d", result);

    
}