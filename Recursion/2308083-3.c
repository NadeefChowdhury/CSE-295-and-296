#include<stdio.h>
int sumOfNaturals(int n)
{
    if(n>1){
        return n+sumOfNaturals(n-1);
    }
    return n;

}
int main(){
    int n;
    scanf("%d", &n);
    int sum = sumOfNaturals(n);
    printf("%d", sum);
}
