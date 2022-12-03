// Display Non Factors and its summation.

/*
    Input :     6
    Output :    4  +  5    = ( 9 )

    Input :     15
    Output :    2   4   6   7   8   9   10  11  12  13  14  = ( 96 )
*/


#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("Summation of non factors are : %d\n",iRet);

    SumNonFactors(iValue);

    return 0;
}