// &arr , &arr+1

#include<stdio.h>
int main(){
    int arr[5]={11,22,33,44,55};
    printf("arr = %d\n",arr); //100
    printf("&arr = %d\n",&arr); //100
    printf("&arr+1 =%d\n",&arr+1);//120

    return 0;
}