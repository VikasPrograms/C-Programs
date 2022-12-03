// Problems on Number of Digit. We accept number from user in a decimal
// numbering system and we break that number into a single digits.

/*
Input : 751         Output : 3

Input : 7515        Output : 4

Input : 75          Output : 2

Input : 7           Output : 1
*/

// This is the Templet file. //

#include<stdio.h>

int CountDigits(int iNo)
{
    // Code
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}