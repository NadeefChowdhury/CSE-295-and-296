#include<stdio.h>
int main(){
int money;
scanf("%d", &money);
printf("Money: %d\n", money);
int net_remaining;
int remaining;
int tax;
if(money<=300000){
    tax = 0;
    net_remaining = money;
}
else if(money>300000){
    remaining = money - 300000;
    if (remaining<=100000){
    tax = remaining * 5/100;
    net_remaining = money - tax;
    }
    else if (remaining >100000 && remaining<=400000){
    
    tax = 100000 * 5/100 + (remaining - 100000)*10/100;
    net_remaining = money - tax;
    }
    else if (remaining >400000 && remaining<=800000){
    tax = 100000 * 5/100 + 300000 * 10/100 + (remaining - 400000)*15/100;
    net_remaining = money - tax;
    }
    else if (remaining>800000 && remaining<=1300000){
    tax = 100000 * 5/100 + 300000 * 10/100 + 400000*15/100 + (remaining-800000)*20/100;
    net_remaining = money - tax;
    }
    else if (remaining>1300000){
    tax = 100000 * 5/100 + 300000 * 10/100 + 400000*15/100 + 500000*20/100 + (remaining-1300000)*25/100;
    net_remaining = money-tax;
    }   
}


printf("%d", net_remaining);
return 0;
}
