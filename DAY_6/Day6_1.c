//switch case with character
//switch case

#include<stdio.h>
int main(){
    int num1, num2;
    char choice;
    printf("enter the values of num1 and num2\n");
    scanf("%d%d",&num1,&num2);

    printf("+\n-\n*\n/\n");

    printf("Enter choice: ");
    scanf(" %c",&choice);

    switch(choice){
        case '+' : 
            printf("Addition = %d\n",num1+num2);
            break;
        case '-' :
            printf("subtraction = %d\n",num1-num2);
            break;
        case '*' :
            printf("multiplication = %d\n",num1*num2);
            break;
        case '/':
            printf("division = %d\n",num1/num2);
            break;
       default :
            printf("Invalid choice\n");
    }
    return 0;


}