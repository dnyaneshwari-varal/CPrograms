//check wheather palindrome

#include<stdio.h>
int checkPalindrome(int);
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int rev=checkPalindrome(num);
    if(rev==num){
        printf("%d is palindrome",num);
    }else{
        printf("%d is not palindrome",num);
    }

}

int checkPalindrome(int num){
    int temp=num;
    int rev=0;
    while(temp != 0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev;
}