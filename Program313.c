// Accept number for user and check whether Bit is ON & This perticular bit is OFF.
// Bit = 4th OFF

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
    
    0000    0000    0000    0000    0000    0000    0000    1000
------------------------------------------------------------------
     0       0       0       0       0       0       0       8

      00000008
      0X00000008
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000008;
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
