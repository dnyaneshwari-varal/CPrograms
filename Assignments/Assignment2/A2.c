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
        case D:
            if(units >0 && units <=100){
                printf("Domestic bill is: %d",units*4.70);
                else if()
            } 

    }

    return 0;
}

