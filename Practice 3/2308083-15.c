#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    int i, sum=0;
    for(i=1; i<=n; i++){
        if(i!=n){
            if(i%2!=0 || i==1){
                printf("%d^2 - ", i);
            }
            else{
                printf("%d^2 + ", i);
            }
            
        }
        else{
            printf("%d^2 = ", i);
        }
        sum = sum + pow(-1, i+1)*pow(i, 2);
    }
    printf("%d", sum);

    return 0;
}
