//ternary operator / conditional operator
//condition ? exp1 true : exp2 false

#include<stdio.h>
int main(){

    int num1=20, num2=30;

    num1 > num2 ? printf("num is greater\n") : printf("num2 is greater\n");

    int max=num1>num2 ? num1 : num2;
    printf("max=%d\n",max);

    return 0;
    
}