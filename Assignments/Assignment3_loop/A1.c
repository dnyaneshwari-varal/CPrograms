//smallest digit in number

#include<stdio.h>
int main(){
    int num;
    int smallest=9;
    printf("Enter num: \n");
    scanf("%d",&num);

    int temp=num;
    while(temp > 0){
        int rem=temp%10;
        if(rem < smallest){
            smallest=rem;
        }
        temp=temp/10;
    }
    printf("smallest digit is: %d\n",smallest);
    return 0;
}