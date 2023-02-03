// Problems on Recursion.
// Accept from user and Display its Summation of Digits.

// Input = 4        Output =    4
// Input = 156      Output =    12
// Input = 456      Output =    15

#include<stdio.h>
#include<stdbool.h>

int SumDigitR(int iNo)
{
    static int iSum = 0;        // Storage class is static
    int iDigit = 0;        // Storage class is static

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigitR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    iRet = SumDigitR(Value);
    printf("Summation of Digits are : %d\n",iRet);

    return 0;
}