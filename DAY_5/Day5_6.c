//nested ternary operatr
//cond ? exp1 true : exp2 false

#include<stdio.h>
int main(){
    int num1=60;
    int num2=70;
    int num3=80;

    int max=num1>num2 ? num1>num3 ? num1: num3 : num2>num3 ? num2:num3;
    printf("max = %d\n",max);

    return 0;

}