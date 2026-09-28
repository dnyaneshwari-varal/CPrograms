//Array with pointer notation

#include<stdio.h>
int main(){
    int arr[5]={11,22,33,44,55};
    printf("arr[0] = %d\n",arr[0]);
    printf("*(arr+0)=%d\n",*(arr+0));

    printf("arr[2] = %d\n",arr[2]);
    printf("*(arr+2)=%d\n",*(arr+2));

    printf("Array Elements: \n");
    for(int i=0;i<5;i++){
        printf("%4d",*(arr+i));
    }
}