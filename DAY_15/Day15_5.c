//condition macros
#include<stdio.h>
 #define PI 3.14
int main(){
    #ifdef PI //if defined
        printf("PI is defined\n");
    #else
        printf("PI is not define\n");
    #endif
}