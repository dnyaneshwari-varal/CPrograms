//Electricity bill with category

#include <stdio.h>
int main(){
    char category;
    float rate;
    int units;
    printf("Enter category: \n");
    printf("D-Domestic");
    printf("C-Commercial");
    scanf("%c",&category);
    printf("Enter Number of units: \n");
    scanf("%d",&units);
    
    switch(category){
        case 'D':
            if(units >0 && units <=100){
                printf("Domestic bill is: %d",units*4.70);
            else if(units >100 && units <=200){
                printf("Domestic bill is: %d",units*7.15);
            }
            else if(units >200 && units <=300){
                printf("Domestic bill is: %d",units*10.35);
            }
            else if(units >300){
                printf("Domestic bill is: %d",units*14.55);
            }
            else{
                printf("enter valid units");
            }
            }
        case 'C':
            if(units >0 && units <=100){
                printf("Commercial bill is: %d",units*6.45);
            else if(units >100 && units <=200){
                printf("Commercial bill is: %d",units*9.35);
            }
            else if(units >200 && units <=300){
                printf("Commercial bill is: %d",units*14.85);
            }
            else if(units >300){
               printf("Commercial bill is: %d",units*17.15);
            }
            else{
                printf("enter valid units");
            }
            } 

            

    }

    return 0;
}

