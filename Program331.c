// Problems on Recursion.
// Accept from user and Display its Perfect Number.

/*
    Perfect Number Defination : 
            a positive integer that is equal to the sum of its proper divisors.
            The smallest perfect number is 6, which is the sum of 1, 2, and 3.
    Other Perfect Numbers List : (6 , 28 , 496)
            6   = (1   +   2   +    3)
            28  = (1   +   2   +    4   +   7    +   14)
            496 = (1   +   2   +    4   +   8    +   16   +   31   +   62   +   124)
*/



#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2))
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(iNo);
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    bRet = CheckPerfectR(Value);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",Value);
    }
    else
    {
        printf("%d is not a perfect number\n",Value);

    }

    return 0;
}