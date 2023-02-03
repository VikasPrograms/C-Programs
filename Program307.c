// Accept number for user and check whether if 4th bit is ON or OFF

/*
concept :
    Bit :       0   2   4   8   16  32  64  128 256 512
    Position :  1   2   3   4   5   6   7   8   9   10

    Concept :       1       0       1       0
                    ON      OFF     ON      OFF
                    4th  <- 3rd  <- 2nd  <- 1st
    
    Input = 11          Output = ON (1 011)
    Input = 10          Output = ON (1 010)
    Input = 5           Output = OFF (0 101)
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 8;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
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
    UINT Value = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}