// Summation of Factors.

/*
    Input : 20      Output :   1   2   4   5    10                  Sum : 22
    Input : 100      Output :   1   2   4   5   10   20   25   50   Sum : 117
*/


#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors are : \n");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

// 0(N/2)0
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    iRet = SumFactors(iValue);

    printf("Summations of factors : %d\n",iRet);

    return 0;
}