// Accept number from user and check whether it is pallindrome or not.
// Pallindrome number :- means 121 number is reverse writting (121) same number is generated.
// (Using while loop.)        // bool

/*
Input = 121      output = 121
Input = 707      output = 707
Input = 232      output = 232
Input = 343      output = 343
Input = 0909      output = 909

( Input = 124      output = 124 )    This number is not a pallindrome number.
( Input = 090      output = 90 )    This number is not a pallindrome number.( Input = 090      output = 90 )    This number is not a pallindrome number.
( Input = 1110     output = 1110 )    This number is not a pallindrome number.
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    while(iNo != 0)
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