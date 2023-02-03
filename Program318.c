// Accept number or Position from user and OFF the Bit from that Postion.

/*
    No  =   1   0   1   0   1   1   1   0

    Pos =   6

    iMask   =   0   0   0   0   0   0   0   1
    iMask   =   iMask << (5);

    iMask   =   0   0   1   0   0   0   0   0

    iMask  =   ~iMask;
    iMask  =    1   1   0   1   1   1   1   1   


    iNo     =   1   0   [1]   0   1   1   1   0
                                                    &
    iMask   =   1   1   [0]   1   1   1   1   1
    --------------------------------------------------
    Result  =   1   0   [0]   0   1   1   1   0


    Input   =   208     Pos =   7
    Output  =   144
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT iAns = 0;

    iMask = iMask << (Pos - 1);
    iMask = ~iMask;

    iAns = No & iMask;

    return iAns;        // return (No & iMask);
}

int main()
{
    UINT Value = 0, Position = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    printf("Enter the Position : \n");
    scanf("%d",&Position);

    iRet = OffBit(Value, Position);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
