#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int counter=0;
    while(n>0){
        n=n/10;
        counter+=1;
    }
    printf("%d", counter);
}
