//unary operator(++ --) with logical operator

#include<stdio.h>
int main(){
    int num1=0;
    int num2=25;

    int res=num1++ && num2++;
        //0++ && not executed
    printf("num1= %d num2= %d res =%d\n", num1,num2,res);//1,25,0

    res=num1++ || num2++;   
    printf("num1= %d num2= %d res =%d\n", num1,num2,res);//1,25,0

    int num3=50;
    res=num1++ || num2++ && num3++;   
    printf("num1= %d num2= %d num3 =%d res =%d\n", num1,num2,num3,res);//1,25,0

    num1=0;
    res=num1++ || num2++ && num3++;
    printf("num1= %d num2= %d num3 =%d res =%d\n", num1,num2,num3,res);


}