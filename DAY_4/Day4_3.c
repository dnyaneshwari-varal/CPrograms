//Logical operators && || !
// && - returns true if both conditions are true ,if 1st condition is false it does not check second condition
// || - it returnns true if either of the one condition is true , if 1st condtion is true it does not check second condtion
 
#include<stdio.h>
int main(){
    int num1=0;
    int num2=-40;

    int res=num1 && num2; // 0 && -40 =0
    printf("res = %d \n",res);

    res=num1 || num2; // 0 && -40 =1
    printf("res = %d \n",res);

    res=!num1; // !0=1
    printf("res = %d \n",res);

    res=!num2; // !-40=0
    printf("res = %d \n",res);

    return 0;
}