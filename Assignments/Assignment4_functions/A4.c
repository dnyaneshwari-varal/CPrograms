//calculate total avg and percentage(pass by address)

#include<stdio.h>

int main(){
     int eng,sci,math;
     printf("Enter eng marks: \n");
     scanf("%d",&eng);
     printf("Enter sci marks: \n");
     scanf("%d",&sci);
     printf("Enter math marks: \n");
     scanf("%d",&math);

     total(&eng,&sci,&math);
     printf("Total is: %d\n",total_val);
     avg(eng,sci,math);
     printf("average is: %d\n",avg);
     percentage(eng,sci,math);
     printf("percentage is: %d",per);
}

void total(int *ptr1, int *ptr2,int *ptr3){
   int total_val=*ptr1+*ptr2+*ptr3;
//    printf("%d\n",total_val);
//    return total_val;
}

void average(int *ptr1, int *ptr2,int *ptr3){
   int avg=(*ptr1+*ptr2+*ptr3)/3;
}
void percentage(int *ptr1, int *ptr2,int *ptr3){
   int per=((*ptr1+*ptr2+*ptr3)/300)*100;

}