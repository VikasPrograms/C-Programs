// Accept number for user and check whether if 10th bit is ON or OFF

/*
       4    8       12      16      20      24      28      32
    0000    0000    0000    0000    0000    0010    0000    0000
      0       0       0       0       0       2       0       0
      00000200
      0X00000200
*/

/*
concept :
    Bit :       0   2   4   8   16  32  64  128 256 512
    Position :  1   2   3   4   5   6   7   8   9   10

    Input = 11          Output = ON
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0X00000200;
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
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }

    return 0;
}