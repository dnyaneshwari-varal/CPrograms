//relational Operators: < > <= >= !=
//it will return 0 and 1
//0->false
//1->true
#include<stdio.h>
int main(){
    int num1=10;
    int num2=40;

    printf("<: %d < %d = %d\n",num1,num2,num1<num2);
    
    printf(">: %d < %d = %d\n",num1,num2,num1>num2);
    
    printf("<=: %d <= %d = %d\n",num1,num2,num1<=num2);

    printf(">=: %d >= %d = %d\n",num1,num2,num1>=num2);

    printf("!=: %d != %d = %d\n",num1,num2,num1!=num2);
}