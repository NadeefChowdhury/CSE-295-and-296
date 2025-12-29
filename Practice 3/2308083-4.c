#include <stdio.h>

int main() {
    for(int i=2; i<=1000; i++){
       int notprime=0;
       for(int j=2; j<=(i/2); j++){
           if(i%j==0){
               notprime=1;
               break;
           }
       }
       if(notprime==0){
           printf("%d\n", i);
       }
    }
    
    return 0;
}
