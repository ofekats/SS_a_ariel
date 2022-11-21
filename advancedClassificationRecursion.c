#include <stdio.h>
#include "NumClass.h"

//return length of int with recursion
int size_of_int(int num, int size)
{
    if (num == 0)
    {
        return size;
    }
    return size_of_int(num/10,++size);
}

//return num power pow with recursion
int power(int num, int size, int res)
{
    if(size == 0)
    {
        return res;
    }
    return power(num,size-1,res*num);
}

//return if num isArmstrong with recursion
int isArmstrong_recu(int num,int size, int result)
{
    if(num == 0)
    {
        return result;
    }
    //power for each digit
    result += power(num%10, size, 1);
    return isArmstrong_recu(num/10,size,result);

}

//return if num isArmstrong with the help of isArmstrong_recu()
int isArmstrong(int num)
{
    int size = size_of_int(num, 0);
    int res = isArmstrong_recu(num,size,0);
    //if num is Armstrong
    if (num == res)
    {
        return 1;
    }
    //else- num is not Armstrong
    return 0;
}

//return if num isPalindrome with recursion
int isPalindrome_recu(int num, int result)
{
    if(num == 0)
    {
        return result;
    }
    result = result*10 + (num%10); 
    return isPalindrome_recu(num/10,result);
}

//return if num isPalindrome with the help of isPalindrome_recu()
int isPalindrome(int num)
{
    int res = isPalindrome_recu(num,0);
    //if num is Palindrome
    if(res == num)
    {
        return 1;
    }
    //else- num is not Palindrome
    return 0;
}

