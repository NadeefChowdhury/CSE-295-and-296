#include<stdio.h>
int factorial(int n)
{
    if(n>1){
        return n*factorial(n-1);
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int product = factorial(n);
    printf("%d", product);
}
