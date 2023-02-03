// Accept number for user and check whether if 7th, 8th & 9th bit is ON or OFF
// Bit ON : 7, 8, 9

/*
       4      8       12      16      20      24      28      32
    0000    0000    0000    0000    0000    0000    0000    0000
    
    0000    0000    0000    0000    0000    0001    1100    0000

      0       0       0       0       0       1       C       0

      000001C0
      0X000001C0
*/

/*
concept :
    Bit :       0   2   4   8   16  32  64  128 256 512  1024  2048
    Position :  1   2   3   4   5   6   7   8   9   10   11    12
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0X000001C0;
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
        printf("7, 8 ,9th bit is ON\n");
    }
    else
    {
        printf("7, 8 ,9th bit is OFF\n");
    }

    return 0;
}