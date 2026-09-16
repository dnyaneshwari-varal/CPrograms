#include <stdio.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

//4536
    int temp=num;
    int a=temp/1000;
    temp=temp%1000;
    int b=temp/100;
    temp=temp%100;
    int c=temp/10;
    temp=temp%10;
    int d=temp/1;

    //correct way to reverse num
    int reverse=(d*1000)+(c*100)+(b*10)+a;
    printf("Reverse value is: %d"\n,reverse);



    printf("face values: %d %d %d %d \n",a,b,c,d);
    printf("place values: %d + %d + %d + %d \n",a*1000,b*100,c*10,d);
    // printf("Reverse is: %d%d%d%d\n",d,c,b,a);
    printf("Reverse value is: %d\n",reverse);
}