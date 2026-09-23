//menu driven calculator

#include<stdio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main(){
    int choice;
    int num1,num2;
    do{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");


    printf("Enter choice: ");
    scanf("%d",&choice);

    
    if(choice > 1 || choice <5){
        printf("enter correct choice");
        break;
    }

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);


    switch(choice){
        case 1:
            add(num1,num2);
            break;
        case 2:
            sub(num1,num2);
            break;
        case 3:
            mul(num1,num2);
            break;
        case 4:
            div(num1,num2);
            break;
        default :
            printf("Enter correct choice!!");

            
     }
    }while(choice != 5 );

   
}



    void add(int num1,int num2){
        printf("Addition is %d\n",num1+num2);
    }

    void sub(int num1,int num2){
        printf("subtraction is %d\n",num1-num2);
    }

    void mul(int num1,int num2){
        printf("multiplication is %d\n",num1*num2);
    }

    void div(int num1,int num2){

        if(num2==0){
            printf("give proper num2\n");
        }
        else{
            printf("division is %d\n",num1/num2);
        }
    }