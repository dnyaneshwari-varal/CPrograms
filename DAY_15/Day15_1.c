//dynamic memory allocation
#include<stdio.h>
#include<stdio.h>
int main(){
    int num1=10; //compilation memory
    int arr[5]; //compilation memory

    int *ptr=(int*)malloc(sizeof(int));
    *ptr=25;
    printf("*ptr = %d\n",*ptr);
    free(ptr);
    ptr=NULL;

    ptr=malloc(sizeof(int)*5); //20 bytes
    printf("Enter the array elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    printf("array elements\n");
    for(int i=0;i<5;i++){
        printf("%4d",ptr[i]);
    }

    free(ptr);
    ptr=NULL;
}