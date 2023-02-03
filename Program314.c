// Accept number for user and check whether Bit is ON & This perticular bit is OFF.
// Bit = 4th OFF

/*
    &   =           [1 1] = [1]  otherwise 0. (  [0 0], [0 1], [1 0] = 0 )
    |   =           [0 0] = [0]  otherwise 1. (  [0 0], [0 1], [1 1] = 1 )
    ^   =( [1 1], [0 0] = [0] )  otherwise 1. (  [0 1], [1 0] = 1 )
    ~   =   0 = 1 & 1 = 0

    concept :
    Bit :       0   2   4   8   16  32  64  128 256 512 1024  2048  4096
    Position :  1   2   3   4   5   6   7   8   9   10  11    12    13

*/

/*
    [] - Bit ON     & - Bitwise AND     | - Bitwise OR

        No :    0   0   0   0   [1]   0   1   0

  ^   Mask :    0   0   0   0   [1]   0   0   0
----------------------------------------------------------
    Result :    0   0   0   0   [0]   0   1   0   


        No :    0   0   0   0   [0]   0   1   0

  ^   Mask :    0   0   0   0   [1]   0   0   0
----------------------------------------------------------
    Result :    0   0   0   0   [1]   0   1   0   
*/

/*
       4      8       12      16      20      24      28      32
    0000    0000    0000    0000    0000    0000    0000    0000
    
    0000    0000    0000    0000    0000    0000    0111    0000
------------------------------------------------------------------
    0000    0000    0000    0000    0000    0000    0111    0000

     0       0       0       0       0       0       7       0

    00000070
    0X00000070
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000070;
    UINT iAns = 0;

    iAns = No ^ iMask;

    return iAns;

    // return (No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
