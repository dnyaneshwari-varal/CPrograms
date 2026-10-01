//predefine string function
//strlen,strcmp,strcpy,strstr,strrev,strlwr,strupr,strcat,strncat

#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="sunbeam Info";
    char str2[30];

    //strcpy: copies 1 string into another array
    strcpy(str2,str1);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    //strchr: finds the specific char
    char *ptr=strchr(str1,'i');
    if(ptr == NULL){
        printf("char is not found\n");
    }
    else{
        printf("the char is found at index %d\n",ptr-str1);
    }
    

    //strstr: find the substring
    ptr=strstr(str1,"beam");
    if(ptr == NULL){
        printf("String is not found\n");
    }else{
        printf("the string is found at %d index\n",ptr-str1);
    }
    printf("str1 = %s\n",strrev(str1));
     printf("str1 = %s\n",strrev(str1));
     printf("str1 = %s\n",strlwr(str1));
     printf("str1 = %s\n",strupr(str1));
     printf("str1 = %s\n",strlwr(str1));
     printf("str1 = %s\n",strcat(str1,str2));
     printf("str1 = %s\n",strncat(str1,str2,5));

}