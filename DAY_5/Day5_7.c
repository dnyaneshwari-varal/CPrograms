//switch case

#include<stdio.h>

int main(){
    int num1,num2,choice;

    printf("enter the value of num1,num2\n");
    scanf("%d%d",&num1,&num2);

    printf("1 Addition\n");
    printf("2 Substraction\n");
    printf("3 multiplication\n");
    printf("4 division\n");
    

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Addition =%d\n",num1+num2);
            break;
        case 2:
            printf("Subtraction =%d\n",num1-num2);
            break;
        case 3:
            printf("multiplication =%d\n",num1*num2);
            break;
        case 4:
            printf("division =%d\n",num1+num2);
            break;

        default :
            printf("Invalid choice");
    }
    return 0;

}