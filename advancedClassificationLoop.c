#include <stdio.h>
#include "NumClass.h"

//return length of int
int size_of_int(int num)
{
    int size = 0;
    while(num!=0)
    {
        size++;
        num /=10;
    }
    return size;
}

//return num power pow
int power(int num, int pow)
{
    int res = 1;
    for(int i = 0; i<pow; i++)
    {
        res *=num;
    }
    return res;
}

int isArmstrong(int num)
{
    int size = size_of_int(num);
    int number = num;
    int result = 0;
    int digit = 0;
    //check if num is Armstrong
    while(number != 0)
    {
        digit = number%10;
        number /=10;
        result += power(digit, size);
    }
    //if num is Armstrong
    if(result == num)
    {
        return 1;
    }
    //else- num is not Armstrong
    return 0;
}

int isPalindrome(int num)
{
    int reverse_num = 0;
    int number = num;
    //check if num is Palindrome
    while(number!=0)
    {
        reverse_num += number%10;
        number /= 10;
        if(number!=0)
        {
            reverse_num *=10;
        }
    }
    //if num is Palindrome
    if(reverse_num == num)
    {
        return 1;
    }
    //else- num is not Palindrome
    return 0;
}