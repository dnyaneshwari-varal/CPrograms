// function: with paramters and with return type
#include<stdio.h>
int addition(int , int , int);
int main(){
    int result = addition(20,30,40);
    printf("result = %d\n",result);
    result = addition(70,30,50);
    printf("result = %d\n",result);
    return 0;
}

int addition(int num1 , int num2, int num3){
    int result = num1+num2+num3;
    return result;
}