// Accept number for user and check whether Bit is ON & This perticular bit is OFF.
// Bit = 4th OFF

/*
    [] - Bit ON

        No :    1   0   1   1   [0]   0   0   1

  &   Mask :    1   1   1   1   [0]   1   1   1
----------------------------------------------------------
    Result :    1   0   1   1   [0]   0   0   1
*/

/*
       4      8       12      16      20      24      28      32
    0000    0000    0000    0000    0000    0000    0000    0000
    
    1111    1111    1111    1111    1111    1111    1111    0111

      F      F       F       F       F       F       F       7

      FFFFFFF7
      0XFFFFFFF7
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;

    iAns = No & iMask;

    return iAns;

    // return (No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
