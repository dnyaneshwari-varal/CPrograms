//pointer arithmatic


// ptr++ = pointer is incremented
    // ++ptr = pointer is incremented
    // *ptr++ = pointer is incremented
    // ++*ptr = value is incremented
    // ++(*ptr) = value is incremented
    // (*ptr)++ = value is incremented


#include<stdio.h>
int main(){
    int num1=25;
    int *ptr=&num1;
    printf("num1 = %d\n",num1); //25
    printf("num1 = %u\n",&num1); //100
    printf("ptr = %u\n",ptr); //100
    ++*ptr;
    printf("num1 = %d\n",num1);//26
    printf("ptr = %u\n",ptr);//100

    int num2=30;
    int *ptr2=&num2;
    printf("num2 = %d\n",num2);//30
    printf("num2 = %u\n",&num2);//200
    printf("ptr2 = %u\n",ptr2);//200
    *ptr2++;
    printf("num2 = %d\n",num2);//30
    printf("ptr2 = %u\n",ptr2);//204

    return 0;

}