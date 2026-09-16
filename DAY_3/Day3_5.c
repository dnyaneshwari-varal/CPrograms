//Typecasting : Upcasting and downcasting

#include<stdio.h>
int main(){
    // float fvar=5/3;   (5/3)consider as int so output will be in int
    // printf("fvar = %.2f \n",fvar); //1.00

    float fvar=(float)5/3;  //(upcasting)
    printf("fvar = %.2f \n",fvar); //fvar = 1.67 

    int num1=2.7;
    printf("num1 = %d\n",num1);


}