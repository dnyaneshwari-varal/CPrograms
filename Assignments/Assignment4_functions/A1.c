//calculate simple intrest

#include<stdio.h>
double simpleIntrest(double,double,double);

int main(){
    double p,r,y;
    printf("Enter Principal amount: \n");
    scanf("%lf",&p);

    printf("Enter rate of intrest: \n");
    scanf("%lf",&r);

    printf("Enter time in years: \n");
    scanf("%lf",&y);

    double result=simpleIntrest(p,r,y);
    printf("Simple Intrest is: %.2lf",result);

    

}

double simpleIntrest(double p,double r,double y){
    double result=(p*r*y)/100;
    return result;
}