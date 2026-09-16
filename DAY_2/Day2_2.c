//char and its ascii values

#include <stdio.h>
int main(){
    char ch1='A' ,ch2='Z';
    char ch3='a' ,ch4='z';
    printf("Ascii value of A to Z is: %d to %d \n",ch1,ch2);
    printf("Ascii value of A to Z is: %d to %d\n",'A','Z');

    printf("Ascii value of a to z is: %d to %d\n",ch3,ch4);
    printf("Ascii value of a to z is: %d to %d\n",'a','b');

    printf("Ascii value of 0 to 9 is: %d to %d\n",'0','9');

    printf("Ascii value of \\n is: %d \n",'\n');
    //printf("Ascii value of -1 is: %d \n",'-1');
    return 0;
}