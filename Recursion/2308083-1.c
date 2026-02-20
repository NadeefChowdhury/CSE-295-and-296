#include<stdio.h>
void printNumbersIn(int n)
{
    if(n>1) {
        printNumbersIn(n-1);
        printf("%d\n", n);
    }
    else printf("%d\n", n);

}
int main()
{
    int n;
    scanf("%d", &n);
    printNumbersIn(n);
}
