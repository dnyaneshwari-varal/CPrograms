// Check whether number is power of 2

#include <stdio.h>

int main() {
    int num;
    int rem;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 1) {

        rem = num % 2;

        if(rem != 0) {
            printf("Not a power of 2");
            return 0;
        }

        num = num / 2;
    }

    if(num == 1)
        printf("Power of 2");
    else
        printf("Not a power of 2");

    return 0;
}