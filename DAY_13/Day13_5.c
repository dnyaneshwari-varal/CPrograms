// char 2-D Array and size

#include<stdio.h>
int main(){
    char depts[][50]={"HR","Sales","Marketing","Training"};

    printf("depts[1]  %s\n",depts[1]); //sales
    printf("depts[2][3] % c\n",depts[2][3]); //
    printf("*(*(depts+2)+3 %c \n",*(*(depts+2)+3));
    printf("*(*(depts+2)+3 %c \n",*(*(depts+2)+3)+2);

    printf("sizeod depts = %u\n",sizeof(depts));
    printf("sizeod depts[1] = %u\n",sizeof(depts[1]));
    printf("sizeod depts[1][1] = %u\n",sizeof(depts[1][1]));
}