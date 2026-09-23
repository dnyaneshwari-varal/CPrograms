// Size of Pointer
// 32 bit compiler = 4bytes
//64 bit compiler = 8 bytes

#include<stdio.h>
int main(){
    int num1=25;
    int *ptr=&num1;

    char ch='A';
    char *c_ptr=&ch;

    float fvar=1.2f;
    float *f_ptr=&fvar;

    double dvar=3.4;
    double *d_ptr=&dvar;

    printf("size of ptr=%u\n",sizeof(ptr)); //4
    printf("size of c_ptr=%u\n",sizeof(c_ptr)); //4
    printf("size of f_ptr=%u\n",sizeof(f_ptr)); //4 
    printf("size of d_ptr=%u\n",sizeof(d_ptr)); //4
}