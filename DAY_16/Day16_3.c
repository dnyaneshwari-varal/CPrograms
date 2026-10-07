//structure pointer variable(accessing data using pointer)

#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}student;

int main(){
    student s1={1,"OM",80};
    student *ptr=&s1;
    printf("rollno=%d name = %s marks = %.2f\n",s1.rollno,s1.name,s1.marks);
    printf("rollno=%d name = %s marks = %.2f\n",ptr->rollno,ptr->name,ptr->marks);
}