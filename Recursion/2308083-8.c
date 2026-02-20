#include<stdio.h>
int isPalindrome(char str[], int start, int end)
{
    int diff=end-start;
    if(diff==1){
        if(str[end]==str[start]) return 1;
        else return 0;
    }
    else if(end==start) return 1;
    else if(str[start]==str[end]){
        isPalindrome(str, start+1, end-1);
    }
    else return 0;
}
int main()
{
    char str[100];
    scanf("%s", &str);
    int len = 0;
    for(int i=0; i<1000; i++){
        if(str[i]=='\0') break;
        else len+=1;
    }
    int start=0,end=len-1;
    if(isPalindrome(str, start, end)){
        printf("Palindrome");
    }
    else printf("Not palindrome");
}
