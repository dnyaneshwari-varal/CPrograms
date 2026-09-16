//printf and scanf return type

#include<stdio.h>
int main(){
    int count = printf("Hello!\n");
    printf("count is %d\n",count);
    //output
    // Hello!
    // count is 7

    int num=20;
    count = printf("num: %d\n",num); //count is-------num: %d\n=num: 10\n=8
    printf("count is: %d",count);

    int num1,num2,num3;
    printf("Enter num1,num2\n");
    count=scanf("%d%d",&num1,&num2);
    //printf("Enter num1,num2,num3\n");
    // count=scanf("%d%d%d",&num1,&num2,&num3);
    printf("count is: %d\n",count);

}