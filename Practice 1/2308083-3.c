#include<stdio.h>
int main(){
char a,b;
scanf("%c", &a);
b=(a-97+1)%26 + 97;
printf("%c", b);
return 0;

}
