#include<stdio.h>
int gcd(int x, int y) {
    if (y != 0) return gcd(y, x% y);
    else return x;
}
int main()
{
    int x, y, temp;
    scanf("%d %d", &x, &y);
    printf("GCD: %d", gcd(x,y));
}
