// Static variable
// default value = 0
// storage = data section
// scope = program / block
// life = program / block

#include<stdio.h>
void fun();
void fun2();
int main(){
    fun();
    fun();
    fun();
    fun2();
    fun2();
    fun2();

}

void fun(){
    int num1=10;  
    printf("num1 = %d\n",num1); // 10 10 10
    num1++;
}

void fun2(){
    static int num1=10;
    printf("num1 = %d\n",num1);  //10 11 12
    num1++;
}