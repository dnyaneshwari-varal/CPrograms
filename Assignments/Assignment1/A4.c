// convert seconds into hr, min, sec

#include<stdio.h>
int main(){
    long totalSec;
    printf("Enter Seconds to convert: \n");
    scanf("%d",&totalSec);

    int hrs=totalSec / 3600;
    int min=(totalSec % 3600) /60;
    int sec=totalSec % 60;
    printf("Hours: %d ",hrs);
    printf("min: %d ",min);
    printf("sec: %d ",sec);

}