// Accept number for user and check whether if 10th bit is ON or OFF

/*
concept :
    Bit :       0   2   4   8   16  32  64  128 256 512
    Position :  1   2   3   4   5   6   7   8   9   10

    Input = 11          Output = ON
    Input = 10          Output = ON
    Input = 5           Output = OFF
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 512;
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
        printf("10th bit is ON\n");
    }
    else
    {
        printf("10th bit is OFF\n");
    }

    return 0;
}