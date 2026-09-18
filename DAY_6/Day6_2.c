// Multiple switch cases(No.of days in a month)
// 1 3 5 7 8 10 12 = 31 days
// 4 6 9 11 = 30 days
// 2 = 29/28 days


#include<stdio.h>
int main(){
    int month;
    printf("Enter the month: \n");
    scanf("%d",&month);

    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("this month has 31 days \n");
            break;
        case 4: case 6: case 9: case 11: 
            printf("this month has 30 days \n");
            break;
        case 2:
            printf("this month has 28/29 days \n");
            break;
        default :
            printf("Invalid user\n");
    
    }
}