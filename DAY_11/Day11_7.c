//sizeof and strlen

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="sunbeam";
    printf("size of str = %u\n",sizeof(str)); //8
    printf("strlen = %u\n",strlen(str)); //7

    // strlen is a predefined function from  string.h
    // calculates length excluding '\0'
    // sizeof includes '\0'


    char str2[]="sunbeam\0Info";
    printf("size of str2 = %u\n",sizeof(str2)); //13
    printf("strlen = %u\n",strlen(str2)); //7

    return 0;
}