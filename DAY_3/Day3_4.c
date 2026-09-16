//width specifier
//  11 22 33 44 55  array printing

#include <stdio.h>
int main(){
    int num1=23;
    printf("num is: %5d\n",num1);//num is:    23   --from right side
    printf("num is: %-5d",num1);//num is: 23   Hii  --from left side
    printf("Hii");
    

    float fvar=3.4;
    printf("num is: %6.3f\n",fvar);//num is:_3.400
    printf("num is: %-6.3f",fvar);//num is:3.400_ Hii
    printf("Hii");

    return 0;

    
}