//passing 2D array to function

#include<stdio.h>

void accept_data(int arr[3][3]);

int main(){
    int arr[3][3];
    accept_data(arr);
    print_data(arr);

    printf("sizeof arr in main= %u\n",sizeof(arr));
    return 0;

}

void accept_data(int arr[3][3]){
    printf("enter the array elements: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("sizeof arr in accept_data= %u\n",sizeof(arr));
}


void print_data(int arr[3][3]){
    printf("array elements: \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("sizeof arr in print_data= %u\n",sizeof(arr));
}