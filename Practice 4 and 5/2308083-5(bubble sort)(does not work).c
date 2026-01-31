#include<stdio.h>

void bubbleSort(int arr[], int n)
{
    int temp=0;
    for (int k = 0; k < n - 1; k++)
    {

        // Last i elements are already in place, so the loop will only num n - i - 1 times
        for (int j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }
    }
    }
    for(int m=0; m<n; m++){
        printf("%d ", arr[m]);
    }
    int count = 0;
    for(int z=0; z<n; z++){
        if(arr[z]==arr[z-1]){
            continue;
        }
        for(int y=z+1; y<n; y++){
            if(arr[z]==arr[y]){
                if(count==0) count+=2;
                else count+=1;
            }
            else if(arr[z]!=arr[y]){
                continue;
            }
        }
        printf("%d: %d times", arr[z], count);
        printf("\n");
    }
}
int main()
{
    printf("Enter the size of array: \n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
}
