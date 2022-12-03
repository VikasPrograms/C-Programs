// Accept number from user and check whether it is pallindrome or not.
// Pallindrome number :- means 121 number is reverse writting (121) same number is generated.
// (Using while loop.) 

/*
Input = 121      output = 121
Input = 707      output = 707
Input = 232      output = 232
Input = 343      output = 343

( Input = 124      output = 421 )    This number is not a pallindrome number.
*/


#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

bool CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return(iReverse == iData);
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