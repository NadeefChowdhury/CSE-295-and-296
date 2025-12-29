#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, sum, n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i<=1){
            sum = i;
        }
        else{
            sum = num1+num2;
            num1 = num2;
            num2 = sum;
        }
        printf("%d ", sum);
    }
    return 0;
}
