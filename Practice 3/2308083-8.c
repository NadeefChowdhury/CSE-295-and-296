#include<stdio.h>
int main(){
 int a, reverse, remainder, temp;
 scanf("%d", &a);
 temp=a;
 while(temp>0){
    remainder = temp%10;
    reverse = reverse*10 + remainder;
    temp = temp/10;
 }
 printf("Reverse: %d\n", reverse);
 if(a==reverse){
    printf("Palindrome");
 }

 return 0;
}
