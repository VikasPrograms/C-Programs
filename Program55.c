// Display Even numbers count accept user digits

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if(iNo == 0)         // Filter
    {
        return 1;
    }

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) ==0)
        {
            iEvenCnt++;
        }
        iNo /= 10;
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}