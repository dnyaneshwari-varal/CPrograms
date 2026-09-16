//unary operator with comma and bracket

#include<stdio.h>
int main(){
    int num1=20;
    int num2=50;
    int res;

    res=num1++ , ++num1, num1++;
      //20++ ,21++,22++
      //ans will be 20
    printf("res = %d num1= %d\n",res,num1);

    res = (++num2, num2++, ++num2, num2++);
        //++50, 51++,++52,53++
    printf("res = %d num2 = %d\n",res,num2);//53 ,54

     return 0;
}