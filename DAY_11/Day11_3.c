//const pointer 
#include<stdio.h>
int main(){
    const float PI=3.14;  //value is constant
    const float *fptr = &PI; //pointer is constant
    //float const *const fptr=&PI; //optinal
    //*fptr = 2.14; //error

    // float fvar =3.5f;
    // float const *const fptr=&PI;
    //const float *const fptr= &PI;

    //fptr = &fvar;
    printf("PI = %.2f\n",PI);

    //const int num1=10;
    //int const num1=10; value is constatnt

    //const int *ptr=&num1;
    //int const *ptr=&num1; pointer is constant

    //const int *const ptr=&num1;
    //int const *const ptr =&num; //pointer can not change value and pointer cannot address to the another variable
}