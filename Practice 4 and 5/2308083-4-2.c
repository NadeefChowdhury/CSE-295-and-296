#include<stdio.h>
int pairing(int arr[], int n)
{
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(arr[j]!=arr[k]){
            for(int l=2; l<=arr[j]; l++){
                if(arr[j]%l==0 && arr[k]%l==0){
                    printf("%d, %d", arr[j], arr[k]);
                    printf("\n");
                }
            }
            }
        }
    }
}
int main()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    pairing(arr, n);
}
