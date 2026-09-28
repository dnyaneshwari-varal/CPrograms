//Size of array and array index
#include<stdio.h>
int main(){
    int arr[5] = {11,22,33,44,55};
    int arr2[7]={11,22,33};
    printf("sizeof arr = %u\n", sizeof(arr));//20
    printf("sizeof arr2 = %u\n", sizeof(arr2));//28
    printf("sizeof arr[0] = %u\n", sizeof(arr[0]));//4

    int length=sizeof(arr)/sizeof(arr[0]);//20/4=5
    printf("length = %d\n",length);//5
}