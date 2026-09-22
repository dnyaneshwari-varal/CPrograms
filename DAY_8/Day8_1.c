
//storage classes: auto, register variables
// Local 
// Default value = Garbage
// scope = block
// life = block
// storage = stack
//-----------------------------------------------------------
//register variables
// default value = Garbage
// scope = block
// life = block
//storage = cpu register or stack
#include<stdio.h>
void fun();
int main(){
    int num1=10;
    fun();
    register int num2;
    printf("num1= %d\n",num1);
}

void fun(){
   // printf("num1 = %d\n",num1); we can't access local variable of another function
}