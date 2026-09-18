//palindrome

#include<stdio.h>
int main(){
    int num;
    printf("Enter num: \n");
    scanf("%d",&num);

    int temp=num;

    int rem=temp%10;
    temp=temp/10;
    int rev =rem*100;
   
    rem=temp%10;
    temp=temp/10;
    rev =rev+rem*10;

    rem=temp%10;
    temp=temp/10;
    rev =rev+rem*1;

printf("%d",rev);

    if(num==rev)
        printf("num is palindrome");
    else
        printf("num is not palindrome");
    
    
    

    
    
}