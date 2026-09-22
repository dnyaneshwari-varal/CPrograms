// Function: with parameters without rerurn type
// return_type function_name(input parameters)

#include<stdio.h>
void addition(int,int); //declaration
int main(){
    addition(10,20);//actual arguments
}

void addition(int n1,int n2){ //formal arguments
    int result=n1+n2;
    printf("result = %d\n",result);
}