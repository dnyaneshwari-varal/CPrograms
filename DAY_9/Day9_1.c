//Pointer
// pointer is a variable which stores the address of another variable

#include<stdio.h>
int main(){
    int num1=25;
    int *ptr=&num1;

    printf("num1 =%d\n",num1);
    printf("&num1 =%u\n",&num1);
    printf("ptr = %u\n",ptr);
    printf("&ptr= %u\n",&ptr);
    return 0;
}