// Problems on Recursion.
// Accept from user and Display its Factors Summation.

// Input = 4    Output =    3 (1 + 2)
// Input = 10    Output =   8 (1 + 2 + 5)

#include<stdio.h>

int FactorsSumR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    
    if(iCnt <= (iNo/2))
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        FactorsSumR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    iRet = FactorsSumR(Value);
    printf("Summation of Factors : %d\t",iRet);

    return 0;
}