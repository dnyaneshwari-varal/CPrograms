//value out of range

#include <stdio.h>

int main(){
    char ch1='A', ch2='B';
    char sum=ch1+ch2;// ( by default signed)
    printf("sum is: %d\n",sum); //-125 because signed char = -128 to 127 

    unsigned char sum1=ch1+ch2;
    printf("sum is: %d\n",sum1); //131

    unsigned char ch3=500;
    printf("sum is: %d\n",ch3); //we have used formula here n-2*8





}