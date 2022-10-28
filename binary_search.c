#include<stdio.h>

int binarySearch(int arr[], int k, int low, int high)
{
    while(low <= high)
    {
        int mid = low + (high -low) / 2;

        if(arr[mid] == k)
            return mid;

        if(arr[mid] < k)
        {
            low = mid +1;
        }
        else{
            high=mid-1;
        }
    }

}

int  main()
{
    int arr[]= {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);
    int k;
    printf("Enter key for searching:");
    scanf("%d", &k);
    int result = binarySearch(arr, k, 0, n-1);

    if(result == -1)
    {
        printf("Element not found");
    }
    else{
        printf("Element is found at index :%d", result);
    }

}