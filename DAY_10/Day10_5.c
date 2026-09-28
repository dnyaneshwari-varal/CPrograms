// Arrays basic declration,initialization,Printing

#include<stdio.h>
int main(){
    //1
    int arr[5]; //declaration
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    //2
    int arr2[5]={11,22,33,44,55}; //initialization
    printf("arr2[0]=%d\n arr2[1]=%d\n",arr2[0],arr2[1]);

    //3
    int arr3[7]={11,22,33,44}; //partial initialization

    //int arr[]; error

    //4
    int arr4[]={11,22,33,44};
    printf("Array Elements: \n");
    for(int i=0; i<5;i++){
        printf("%4d",arr2[i]);
    }

    return 0;
}