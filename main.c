#include <stdio.h>
#include "NumClass.h"


int main()
{
    int num1, num2 =0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("The Armstrong numbers are:");
    int num = num1;
    while(num1<=num2)
    {
        if(isArmstrong(num1) == 1)
        {
            printf(" %d",num1);
        }
        num1++;
    }

    num1 = num;
    printf("\nThe Palindromes are:");
    while(num1<=num2)
    {
        if(isPalindrome(num1) == 1)
        {
            printf(" %d",num1);
        }
        num1++;
    }

    num1 = num;
    printf("\nThe Prime numbers are:");
    while(num1<=num2)
    {
        if(isPrime(num1) == 1)
        {
            printf(" %d",num1);
        }
        num1++;
    }

    num1 = num;
    printf("\nThe Strong numbers are:");
    while(num1<=num2)
    {
        if(isStrong(num1) == 1)
        {
            printf(" %d",num1);
        }
        num1++;
    }
    printf("\n");
    return 0;
}