// Accept the number as well as Position from user and Toggle the Bits from that Range.


/*
    &   =           [1 1] = [1]  otherwise 0. (  [0 0], [0 1], [1 0] = 0 )
    |   =           [0 0] = [0]  otherwise 1. (  [0 0], [0 1], [1 1] = 1 )
    ^   =( [1 1], [0 0] = [0] )  otherwise 1. (  [0 1], [1 0] = 1 )
    ~   =   0 = 1 & 1 = 0
*/
/*
    0000    0000    0000    0000    0000    0000    0000    0000

Range :-
        Start   =   7        (include 7)
        End     =   17       (include 17)

    Input   =   0010    1010    1010    111 [ 0    1101    1010    01 ] 10    1101
    Output  =   0010    1010    1010    111 [ 1    0010    0101    10 ] 10    1101
    Mask    =   0000    0000    0000    000 [ 1    1111    1111    11 ] 00    0000
                 0       0       0        1          F       F       C          0

    Mask1   =   1111    1111    1111    1111    1111    1111    1111    1111
    Mask2   =   1111    1111    1111    1111    1111    1111    1111    1111

    Mask1 = Mask1 << (Start - 1);
                1111    1111    1111    1111    1111    1111    11{00    0000}

    Mask2 = Mask2 >> (32 - End)
    Mask2 = Mask2 >> 15
                [0000    0000    0000    000]1    1111    1111    1111    1111

    Mask = Mask1 & Mask2

                1111    1111    1111    1111    1111    1111    1100    0000
            &   0000    0000    0000    0001    1111    1111    1111    1111
            --------------------------------------------------------------------
                0000    0000    0000    000[1    1111    1111    11]00    0000

    Result = No ^ Mask
                0010    1010    1010    1110    1101    1010    0110    1101
            ^   0000    0000    0000    0001    1111    1111    1100    0000
            --------------------------------------------------------------------
                0010    1010    1010    1110    0010    0101    1010    1101    
*/


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF, Mask = 0, Result = 0;

    Mask1 = Mask1 << (Start - 1);
    Mask2 = Mask2 >> (32 - End);
    Mask = Mask1 & Mask2;

    Result = No ^ Mask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT Str = 0, End = 0;
    UINT iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&Value);

    printf("Enter Starting Bit Position \n");
    scanf("%d",&Str);

    printf("Enter Ending Bit Position \n");
    scanf("%d",&End);

    iRet = ToggleRange(Value, Str, End);
    printf("Updated Number is : %d\n",iRet);

    return 0;
}