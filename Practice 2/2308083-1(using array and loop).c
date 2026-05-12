#include<stdio.h>
int main()
{
    int a = 5696;
    int arr[4];
    for(int i=0; i<4; i++){
        int num = a%10;
        a = a/10;
        arr[i] = num;
    }
    int largest = (arr[0]>arr[1]) ? arr[0]:arr[1];
    int sec_largest = (arr[0]>arr[1]) ? arr[1]:arr[0];
    for(int i=2; i<4; i++){
        if(arr[i]>largest){
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>sec_largest && arr[i]<largest){
            sec_largest = arr[i];
        }
    }
    printf("%d %d", largest, sec_largest);
}
