// Operators: Assignment(binary), comma(special type of operator)
//comma with bracket

#include <stdio.h>
int main(){
    //int num=10,20,30; not allowed
    int num;
    num=10,20,30;//left num will take 
    printf("num =%d \n",num);

    int num2;
    num2=(10,20,30); //right num will take 
    printf("num2 =%d \n",num2);

    int num3=(50,60,70);
    printf("num3 =%d \n",num3);
}