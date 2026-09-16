//octal, decimal,hexadecimal

#include <stdio.h>
int main(){
    int num1=100;
    int num2=0100;
    int num3=0x100;

    printf("num1 = %x \n",num1);
    printf("num2 = %d \n",num2);
    printf("num3 = %o \n",num3);

    return 0;
}