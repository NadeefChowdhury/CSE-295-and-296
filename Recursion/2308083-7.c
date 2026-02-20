#include<stdio.h>
int largest(int arr[], int n)
{
    int temp;
    if(arr[n-1]>arr[n-2]){
        temp = arr[n-1];
        arr[n-1] = arr[n-2];
        arr[n-2] = temp;
    }
    if(n==0) return arr[n];
    largest(arr, n-1);

}
int main()
{
    int n;
    printf("Enter the number of elements in your array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", largest(arr, n));
}
