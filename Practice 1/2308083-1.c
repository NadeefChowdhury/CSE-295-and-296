#include<stdio.h>
int main(){
int a,b,c,temp;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
temp=c;
c=a;
a=temp;

printf("a=%d, b=%d, c=%d", a,b,c);

return 0;
}
