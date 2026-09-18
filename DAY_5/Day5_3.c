//coditinal statement : if else

#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter value of num1 and num2\n");
    scanf("%d%d",&num1,&num2);

    if(num1 > num2)
        printf("num1 is greater\n");

    else
        printf("num2 is greater\n");
        printf("bye\n");
}