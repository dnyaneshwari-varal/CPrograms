//Pointer to pointer
#include<stdio.h>
int main(){
    int num1=10;
    int *ptr=&num1;
    int **p_ptr =&ptr;

    printf("num1 = %d\n",num1);//10
    printf("&num1 =%u\n",&num1);//100
    printf("ptr = %u\n",ptr);//100
    printf("*ptr = %u\n",*ptr);//10
    printf("p_ptr = %u\n",p_ptr);//200-address of ptr
    printf("**p_ptr = %u\n",**p_ptr);//10
}