#include<stdio.h>
int main(){
char X;
scanf("%c", &X);
int N;
scanf("%d", &N);
int sum = (X-65+N)%26 + 65;

char Z=sum;

printf("%c",Z);


return 0;
}
