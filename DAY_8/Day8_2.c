// Global variable , Extern(Keyword)
// default value = 0
// storage = Data section
// scope = throughout the program
// life = throughout the program

#include<stdio.h>
int num1=12;
extern int num2;
void fun();
int main(){
    int num1=10;
    printf("num1 in main = %d\n",num1);
    fun();
    printf("num2 = %d\n",num2);
}
int num2=32;
void fun(){
    num1=num1+2;
    printf("num1 in fun= %d\n",num1);
}