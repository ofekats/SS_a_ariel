#include <stdio.h>
#include "NumClass.h"

int isPrime(int num)
{
    //1 is prime so return true
    if(num == 1)
    {
        return 1;
    }
    //for each number check if devided from 2 to num if so return false
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    //otherwise num is prime return true
    return 1;
}

//return factorial of num
int factorial(int num)
{
    int fact = 1;
    for(int i = 1;i<=num; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrong(int num)
{
    //if 0 num is not Strong
    if(num == 0)
    {
        return 0;
    }
    int number = num;
    int result = 0;
    int digit = 0;
    //check if num is Strong
    while(number != 0)
    {
        digit = number%10;
        number /=10;
        result += factorial(digit);
    }
    //if num is Strong
    if(result==num)
    {
        return 1;
    }
    //else- num is not Strong
    return 0;
}
