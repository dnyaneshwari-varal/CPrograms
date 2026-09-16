//C program to accept an integer from the user display same value in different format as: 
//character,decimal,Octal,Hexadecimal

#include<stdio.h>
int main(){
    int num1;
    printf("Enter num1\n");
    scanf("%d",&num1);

    printf("Character is: %c\n",num1);
    printf("Decimal is: %d\n",num1);
    printf("Octal is: %o\n",num1);
    printf("Hexadecimal is: %x\n",num1);

    return 0;
}