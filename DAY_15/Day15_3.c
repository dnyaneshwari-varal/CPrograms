//Macros variable declarations

#include<stdio.h>
#define PI 3.14 //macro
#define SIZE 7
#define ROW 2
#define COL 3

int main(){
    int arr[SIZE];
    int arr2[ROW][COL];
    printf("Enter elements\n");
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            scanf("%d",&arr2[i][j]);
        }

    }

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("%4d",arr2[i][j]);
            
        }printf("\n");

    }
    printf("PI = %.2f\n",PI);
}