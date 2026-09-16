//library fine calculator

#include<stdio.h>
int main(){
    double fineP=3.50;
    int overdueDay;
    
    printf("Enter overdueDay: ");
    scanf("%d",&overdueDay);

    double totalFine=3.50*overdueDay;
    // printf("Total Fine is: %.2lf\n",totalFine);

    double gst=totalFine*18/100;
    // printf("GST is: %.2lf\n",gst);
    double finalTotal=totalFine+gst;

    printf("Total Fine is: %.2lf\n",totalFine);
    printf("GST is: %.2lf\n",gst);
    printf("Final total payable value is: %.2lf\n ",finalTotal);


}