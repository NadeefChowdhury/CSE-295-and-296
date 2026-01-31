#include<stdio.h>
void frequency(int arr[], int n)
{
    int count=0;
    int present_in_distinct=0;
    int frequency[n];
    int distinct[n];
    for(int j=0; j<n; j++){
        for(int l=0; l<n; l++){
            if(distinct[l]==arr[j]) {
                present_in_distinct=1;
                break;
            }
        }
        if(present_in_distinct==1){
            present_in_distinct=0;
            continue;
        }
        present_in_distinct=0;
        for(int k=j+1; k<n; k++){
            if(arr[j]==arr[k]){
                if(count==0) count+=2;
                else count+=1;
            }
        }
        if(count==0) frequency[j]=1;
        else frequency[j]=count;
        count = 0;
        distinct[j]=arr[j];
    }
    for(int m=0; m<n; m++){
        printf("%d: %d times", distinct[m], frequency[m]);
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
    frequency(arr, n);
}
