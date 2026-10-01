//String function simulation
//strcpy

#include<stdio.h>
int main(){
    char src[]="sunbeam";
    char dest[30];
    my_strcopy(dest,src);
    printf("src= %s\n",src);
    printf("dest=%s\n",dest);
    return 0;

}

void my_strcopy(char *dest,char *src){
    int i=0;
    while(src[i] != '\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}