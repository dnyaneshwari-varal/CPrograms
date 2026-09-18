// Loops: While loop
// Entry control loops
//      * while loop
//      * for loop
// Exit control loops
//      * do while loop

//while loop

#include<stdio.h>
int main(){
    int num1;
    printf("enter which table u want to print: \n");
    scanf("%d",&num1);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d\n",num1,i,num1*i);
        i++;
    }
}