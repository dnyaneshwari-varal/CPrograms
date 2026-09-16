#include<stdio.h>
void main(){
    int num1=10;
    char ch='A';
    float fvar=1.7;
    double dvar=3.5;

    printf("num1 value is %d \n",num1);
    printf("ch value is %c \n",ch);
    printf("fvar value is %f \n",fvar); //after . it will give 6 values
    printf("dvar value id %lf \n",dvar); //after . it will give 6 values

    //with specifier
    printf("fvar value is %.2f \n",fvar);
    printf("dvar value id %.2lf \n",dvar);

    
}