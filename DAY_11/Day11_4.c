//char array

#include<stdio.h>
int main(){
    char str[5]={'A','B','C','D','E'}; //CHAR ARRAY
    char str2[5]={'A','B','C'}; //string
    char str3[5]="POOJA";
    char str4[5]="PUNE";   
    //char str5[]; //error

    char str5[]="sunbeam";
    char str6[]={'s','u','n','b','e','a','m'};

    printf("str2= %s\n",str2);
    printf("str3 = %s\n",str3);

    printf("String : \n");

    for(int i=0;i<7;i++){
        printf("%c",str6[i]);
    }
    return 0;
}