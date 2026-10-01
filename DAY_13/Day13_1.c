//2D array

#include<stdio.h>
int main(){
    int arr[5]={11,22,33,44,55}; //1D array
    int arr1[3][2]={11,22,33,44,55,66};//2D array
    int arr2[3][3]={11,22,33,44,55};//partial intialization
    int arr4[3][3]={{10,20},{30},{40,50}};
    //int arr4[][]; //error
    int arr5[][3]={1,2,3,4,5};
    printf("arr1[1][1] =%d \n",arr1[1][1]); //44

    printf("Array elements: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%4d",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;

}