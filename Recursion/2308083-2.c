#include<stdio.h>
void printNumbersDe(int n)
{
    if(n>1) {
        printf("%d\n", n);
        printNumbersIn(n-1);
    }
    else printf("%d\n", n);

}
int main()
{
    int n;
    scanf("%d", &n);
    printNumbersDe(n);
}
