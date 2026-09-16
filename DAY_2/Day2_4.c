// %*c

#include<stdio.h>
int main(){
    int num1,num2,num3;
    char ch;

    // printf("Enter value of num1,num2 num3\n");
    // scanf("%d%d%d",&num1,&num2,&num3);
    // printf("num1=%d,num2=%d,num3=%d\n",num1,num2,num3);

    // printf("Enter value of ch\n");
    // scanf("%ch",&ch);
    // printf("ch=%c",ch);
    
     printf("Enter value of num1,num2 num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("Enter value of ch\n");
    //scanf("%c",&ch);
    //scanf(" %c",&ch);
    scanf("%*c%c",&ch);

    printf("num1=%d,num2=%d,num3=%d\n",num1,num2,num3);
    printf("ch=%c",ch);
}