// Display Summation of N number by using for loop.

#include<stdio.h>

int Summation()
{
    int iSum = 0;
    int iCnt = 0;

    //      1        2        3
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        iSum = iSum + iCnt;     // 4
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}