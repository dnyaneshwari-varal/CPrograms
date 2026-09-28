//scanf and gets
#include<stdio.h>
int main(){
    char str[30];
    printf("Enter string\n");
    //scanf("%s",str);

    gets(str);
    printf("str = %s\n",str);
}