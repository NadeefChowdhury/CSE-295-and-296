//does not work for repeated digits

#include<stdio.h>
int main(){
int a, r1,r2,r3,r4;
scanf("%d", &a);
r1=a%10;
r2=a%100;
r3=a%1000;
r4=a%10000;
int b,c,d,e;
b = (r2-r1)/10;
c = (r3-r2)/100;
d = (r4-r3)/1000;

int secondmax = r1;
int num_of_greater_r1=0;
if(b > r1){
    num_of_greater_r1 += 1;
}
if(c > r1){
    num_of_greater_r1 += 1;
}
if(d > r1){
    num_of_greater_r1 += 1;
}

if(num_of_greater_r1==1){
    secondmax = r1;
}



int num_of_greater_b=0;
if(r1 > b){
    num_of_greater_b += 1;
}
if(c > b){
    num_of_greater_b += 1;
}
if(d > b){
    num_of_greater_b += 1;
}

if(num_of_greater_b==1){
    secondmax = b;
}






int num_of_greater_c=0;
if(r1 > c){
    num_of_greater_c += 1;
}
if(b > c){
    num_of_greater_c += 1;
}
if(d > c){
    num_of_greater_c += 1;
}

if(num_of_greater_c==1){
    secondmax = c;
}




int num_of_greater_d=0;
if(r1 > d){
    num_of_greater_d += 1;
}
if(c > d){
    num_of_greater_d += 1;
}
if(b > d){
    num_of_greater_d += 1;
}

if(num_of_greater_d==1){
    secondmax = d;
}

printf("%d", secondmax);

return 0;
}
