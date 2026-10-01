//String comparison
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="sunbeam";
    char str2[]="suNbeAm";

    // if(str1 == str2){
    //     printf("Strings are equal\n");
    // }else{
    //     printf("string are not equal\n");
    // }

    int result=strcmp(str1,str2);
    printf("result = %d\n ",result);
    if(result==0){
        printf("Strings are equal\n");
    }
    else if(result>0){
        printf("str1 is greater\n");
    }else{
        printf("str2 is greater\n");
    }
}