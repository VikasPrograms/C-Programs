// Accept number from user and check whether it is pallindrome or not.
// Pallindrome number :- means 121 number is reverse writting (121) same number is generated.
// (using for loop)

/*
Input = 121      output = 121
Input = 707      output = 707
Input = 232      output = 232
Input = 343      output = 343

( Input = 124      output = 421 )    This number is not a pallindrome number.
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    for( ; iNo != 0 ; )             // changes syntax
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;          // using boolean method

    printf("Please enter number is : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number \n",iValue);
    }

    return 0;
}