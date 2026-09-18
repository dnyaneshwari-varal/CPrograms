// Typedef
// another name given to the predefined datatype and userdefined datatype

#imclude<stdio.h>

int main(){
    unsigned int num1;
    unsigned int num2;

    typedef unsigned int u_int;
    u_int num3;
    u_int num4;

    unsigned int num6;

    typedef int i;
    i num7;

    enum colors{red,black,blue,yellow,violet};
    enum colors c1;
    typedef enum department{sales,HR,Finance}dept;
    dept d1; //d1 variable
    dept d2;
    

}
