#include<stdio.h>
int main(){
int a, r1,r2,r3,r4;
scanf("%d", &a);
r1=a%10;
r2=a%100;
r3=a%1000;
r4=a%10000;
int b,c,d,e;
b = (r2-r1)/10;
c = (r3-r2)/100;
d = (r4-r3)/1000;

printf("%d%d%d%d", r1,b,c,d);


return 0;
}
