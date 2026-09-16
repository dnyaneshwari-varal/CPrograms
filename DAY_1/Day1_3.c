//finding size of data types

#include<stdio.h>
void main(){
    int num=34;
    char ch='A';
    float fvar=3.4;
    double dvar=6.3;

    printf("size of num %u \n", sizeof(num));
    printf("size of ch %u \n", sizeof(ch));
    printf("size of fvar %u \n", sizeof(fvar));
    printf("size of dvar %u \n", sizeof(dvar));

    printf("\n\n");

    printf("size of int %u \n", sizeof(int));
    printf("size of char %u \n", sizeof(char));
    printf("size of float %u \n", sizeof(float));
    printf("size of double %u \n", sizeof(double));

    printf("size of 'A' %u \n", sizeof('A')); //4 A=64 --4 ans aal bcoz compiler 'A'=64 integer gheto so tyachi size 4byte hote.

    printf("size of fvar %u \n", sizeof(1.5)); //8 because compiler 1.5 la double consider karto.
    printf("size of fvar %u \n", sizeof(1.5f));
    

    printf("size of int + double %u \n", sizeof(num+dvar)); //4
    // double(int)+double

     printf("size of int + char %u \n", sizeof(num+ch));
     //int + (int)char
}