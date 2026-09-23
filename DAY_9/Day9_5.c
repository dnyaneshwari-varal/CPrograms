// Assigning address of one type of variable to different type of pointer_


#include<stdio.h>
int main(){
    int num1=500;
    char *ptr=&num1;

    printf("num1 = %d\n",num1);
    printf("*ptr = %d\n",*ptr);

    return 0;
}