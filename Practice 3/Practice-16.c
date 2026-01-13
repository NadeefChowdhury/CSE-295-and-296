#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            printf("%d", k);
        }
        for(int j=1; j<=(n-i)*2; j++){
            printf(" ");
        }
        for(int l=i; l>0; l--){
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}
