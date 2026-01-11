#include<stdio.h>
int main(){
    int n;
    float min, max, temp, sum=0;
    float avg;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        scanf("%f", &temp);
        sum = sum+temp;
        if(i==0){
            min = temp;
            max = temp;
        }
        else{
            if(temp<min){
                min = temp;
            }
            if(temp>max){
                max=temp;
            }
        }
    }
    avg = sum/n;
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %f", avg);
}
