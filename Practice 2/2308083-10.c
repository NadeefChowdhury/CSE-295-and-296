#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
        if(a==b && a==c){
            printf("Triangle possible. Equilateral.");
        }
        else if((a==b && a!=c) || (a!=b && a==c) || (b==c && b!=a)){
            printf("Triangle possible. Isosceles.");
        }
        else{
            printf("Triangle possible. Scalene.");
        }
    }
    else{
        printf("Triangle not possible.");
    }

    return 0;
}
