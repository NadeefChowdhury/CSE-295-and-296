#include <stdio.h>
#include <stdlib.h>
int main() {
float a, b;
char sign;
printf("Enter operator: \n");
scanf("%c", &sign);
printf("Enter 1st number: \n");
scanf("%f", &a);
printf("Enter 2nd number: \n");
scanf("%f", &b);

switch(sign){
    case '+':
        printf("%f\n", a + b);
        break;

    case '-':
        printf("%f\n", a - b);
        break;

    case '*':
        printf("%f\n", a * b);
        break;
    case '/':
        printf("%f\n", a / b);
        break;
    
    }
  
    return 0;
}
