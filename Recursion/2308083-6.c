#include<stdio.h>
int fibonacci(int n)
{
    int term;
    if(n==1) return 0;
    if(n==2) return 1;
    term = fibonacci(n-1) + fibonacci(n-2);

    return term;
}
void printFibonacciSeries(int n)
{
    if(n==1) printf("0 ");
    if(n==2) {
        printf("1 ");
    }
    else{
        printFibonacciSeries(n-1);
        printf("%d ", fibonacci(n));

    }



}

int main()
{
    int n;
    scanf("%d", &n);
    int nth_term=fibonacci(n);
    printf("%dth Fibonacci number: %d\n", n, nth_term);
    printf("0 ");
    printFibonacciSeries(n);
}
