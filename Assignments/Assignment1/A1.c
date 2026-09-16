//calculate area and perimeter of rectangle

#include<stdio.h>
int main(){
    float length;
    float breadth;
    printf("Enter length: ");
    scanf("%f",&length);

    printf("Enter breadth: ");
    scanf("%f",&breadth);

    float area=length*breadth;
    printf("Area of rectangle is: %.3f \n",area);

    float perimeter=2*(length+breadth);
    printf("perimeter of rectangle is: %.3f \n",perimeter);
}