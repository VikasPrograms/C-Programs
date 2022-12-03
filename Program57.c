// Display Even and Odd numbers count accept user digits.

#include<stdio.h>

void CountEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0, iOddCnt = 0;

    if(iNo == 0)         // Filter
    {
        printf("Number of even digits are : 1\n");
        printf("Number of odd digits are : 0\n");
        return;
    }

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo /= 10;
    }
    printf("Number of even digits are : %d\n",iEvenCnt);
    printf("Number of odd digits are : %d\n",iOddCnt);
}

int main()
{
    int iValue = 0;

    printf("Please Enter number : \n");
    scanf("%d", &iValue);
    CountEvenOddDigits(iValue);

    return 0;
}