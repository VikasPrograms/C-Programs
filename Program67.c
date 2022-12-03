// Accept the numbers from users then Display return largest digits of this numbers
// if iteration of loop break max 9 digits.

/*
Input : 721         Output : 7
Input : 987         Output : 9
Input : 563         Output : 6
*/


#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;       // Important change ( iMin= 9; )

    if(iNo < 0)         // Updator .    Negative value convert Positive.
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    printf("Smallest digit is : %d\n",iRet);

    return 0;
}