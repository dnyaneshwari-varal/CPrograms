//string comparison using pointer variable

#include<stdio.h>
int main(){
    char *ptr1="sunbeam";
    char *ptr2="sunbeam";

    if(ptr1 == ptr2){
        printf("string are equal\n");
    }else{
        printf("STrings are not equal\n");
    }
    return 0;
}