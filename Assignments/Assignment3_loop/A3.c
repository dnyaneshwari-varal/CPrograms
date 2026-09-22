//Display even values from multiplication table

#include<stdio.h>
int main(){
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    int i=1;
    while(i<=10){
        int mul=num*i;
        if(mul%2==0){
            printf("%d\n",mul);
        }
        i++;
    }

    return 0;
}