//Rupeed and paise conversion

#include<stdio.h>
int main(){
    int rs,paise;
    printf("Enter rupees");
    scanf("%d",&rs);

    printf("Enter paise");
    scanf("%d",&paise);

    int totalP=rs*100+paise;
    printf("Total Paise = %d\n",totalP);

    double totalRs=(double)totalP/100;
    printf("Total Rupees = %.2f\n",totalRs);
    return 0;

}