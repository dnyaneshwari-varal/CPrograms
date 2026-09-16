// Integer and float num addition

#include<stdio.h>

int main(){
    float num1;
    float num2;
    printf("Enter num1:\n");
    scanf("%f",&num1);

    printf("Enter num2:\n");
    scanf("%f",&num2);

    int sumInt=(int)num1+(int)num2;
    printf("sumInt = %d\n",sumInt);

    float sumFloat=num1+num2;
     printf("sumFloat = %.2f\n",sumFloat);

}