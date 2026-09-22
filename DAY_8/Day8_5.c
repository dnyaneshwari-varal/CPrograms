//Recursion
//factorial

#include<stdio.h>
int fact(int);

int main(){
    int num=5;
    int result =fact(num);
    printf("factorial of %d is %d ",num, result);
}

int fact(int num){
    if(num==0){
        return 1;
    }
    int result=num*fact(num-1);
    return result;
}