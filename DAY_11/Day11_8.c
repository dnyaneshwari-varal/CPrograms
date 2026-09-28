//char array using pointer notation

#include<stdio.h>

int main(){
    char str[]="sunbeam";
    printf("str[2]=%c\n",str[2]); //n array notation
    printf("*(str+2)=%c\n",*(str+2)); //n pointer notation

    printf("str[6]=%c\n",str[6]); 
    printf("*(str+6) =%c\n",*(str+6));

    printf("*(str+6)=%c\n",*(str+6)+2);

    return 0;

}