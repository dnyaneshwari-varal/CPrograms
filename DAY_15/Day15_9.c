//structure syntax

#include<stdio.h>

struct employee{
    int empid;
    char name[20];
    float salary;
}e1;

typedef struct student{
    int rollno;
    char name[20];
    float marks;
}std;

struct{
    int dd;
    int mm;
    int yy;
} d1, d2,d3; //variable

typedef struct{
    int dd;
    int mm;
    int yy;
}date; //alias

int main(){
    struct employee emp;
    std s1; //s1 is a variable
    emp2 e3; // e3 is a variable
    date d5; //d5 is a variable

    return 0;
}