#include<stdio.h>
int pow(int x, int y)
{
    if(y>2){
        return x*pow(x,y-1);
    }
    return x*x;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int power = pow(x,y);
    printf("%d", power);
}
