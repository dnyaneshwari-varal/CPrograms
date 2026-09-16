//short hand operator += -= *= /= %=
//binary operator

#include<stdio.h>
int main(){
    int num1=40;
    int num2=20;
    printf("before operation: num1 = %d num2 = %d\n",num1,num2);

    num1 += num2; // num1=num1+num2; num1=40+20=60
    //num1=60 num2=20
    printf("after operation num1 = %d num2= %d\n",num1,num2);

    num1 -= num2; // num1=num1-num2; num1=60-20=40
    //num1=40 num2=20
    printf("after operation num1 = %d num2= %d\n",num1,num2);

    num1 *= num2; // num1=num1*num2; num1=40*20=800;
    //num1=800 num2=20
    printf("after operation num1 = %d num2= %d\n",num1,num2);

    num1 /= num2; // num1=num1/num2; num1=800/20=40
    //num1=40 num2=20
    printf("after operation num1 = %d num2= %d\n",num1,num2);

    num1 %= num2; // num1=num1-num2; num1=40%20=0
    //num1=0 num2=20
    printf("after operation num1 = %d num2= %d\n",num1,num2);

    //these are not short hand operator
    num1=20 , num2=10;
    num1 =+ num2;
    //num1=(+num2); num1=10
    printf("num1= %d num2= %d\n",num1,num2);

    num1 =- num2;
    //num1=(-num2); num1=-10
    printf("num1= %d num2= %d\n",num1,num2);

    return 0;

}