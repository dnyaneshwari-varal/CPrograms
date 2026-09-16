//Increament and Decrement operator

#include<stdio.h>
int main(){
    int num1=25;
    int num2=50;
    //preincreament
    int res=++num1; 
    printf("res = %d num1= %d \n",res,num1);//26,26

    //post Increament
    res=num1++; //26
    printf("res = %d num1= %d \n",res,num1); //26,27

    //pre decreament
    res=--num2; //49
    printf("res = %d num1= %d \n",res,num2);//49,49

    //post decreament
    res=num2--; //49
    printf("res = %d num1= %d \n",res,num2); //49,48


}