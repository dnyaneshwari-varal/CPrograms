//Enum 
//user defined datatype

#include<stdio.h>
//global
enum year{jan = 1,feb,march,apr,may,june,july,aug,sept,oct,nov,dec};

int main(){
    enum year month;
    month= feb;
    printf("month = %d\n",month);

    printf("enter the month\n");
    scanf("%d",&month);

    switch(month){
        case jan: case march: case may: case july: case aug: case oct: case dec:
            printf("This month has 31 days\n");
            break;
        case apr: case june: case sept: case nov: 
            printf("this month has 30 days \n");
            break;
        case feb:
            printf("this month has 28/29 days \n");
            break;
        default :
            printf("Invalid user\n");
    
    }
}