//command line arguments

#include<stdio.h>
int main(int argc,char *argv[],char *env[]){
    printf("arguments passed at runtime\n");

    for(int i=0;i<argc;i++){
        printf("%s",argv[i]);
    }

    printf("argument count (argv) = %d\n",argc);

    printf("Environment variable\n");
    for(int i=0;i<10;i++){
        printf("%s\n",env[i]);
    }
}