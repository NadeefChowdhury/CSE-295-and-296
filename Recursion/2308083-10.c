#include<stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
    int mid=(high+low)/2;
    if(key>arr[mid]) {
            binarySearch(arr,mid+1,high,key);
    }
    else if(key<arr[mid]) binarySearch(arr,low,high-1,key);
    else if(key==arr[mid]) return mid;
    else if(low==mid){
        printf("Not found in array");
        return 69;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements of your array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter key:\n");
    scanf("%d", &key);
    printf("Index is: %d\n", binarySearch(arr,0,n-1,key));
}
