//pointer arithmatic

#include<stdio.h>
int main(){
    int num1=10;
    int *ptr=&num1;
    printf("num1 =%d\n",num1);//10
    printf("&num1=%u\n",&num1);//100
    printf("ptr = %u\n",ptr);//200
    ptr++;
    printf("num1= %d\n",num1);//10
    printf("ptr = %u\n",ptr);//204---(200+4(scale factor for int))

    char ch='A';
    char *ptr1=&ch;
    printf("ch = %c\n",ch); //A
    printf("ptr1 = %u \n",ptr1); //300
    ptr1++;
    printf("ptr1= %u\n",ptr1);//301----(200+1(scale factor for char))
    printf("ch = %c\n",ch);//A

    return 0;


}