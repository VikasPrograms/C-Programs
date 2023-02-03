/*
    &   =           [1 1] = [1]  otherwise 0. (  [0 0], [0 1], [1 0] = 0 )
    |   =           [0 0] = [0]  otherwise 1. (  [0 0], [0 1], [1 1] = 1 )
    ^   =( [1 1], [0 0] = [0] )  otherwise 1. (  [0 1], [1 0] = 1 )
    ~   =   0 = 1 & 1 = 0
    <<  =   Left Shift Operator
    >>  =   Right Shift Operator
*/

/*
    Input   =   238    --->    1  1  1  0      1  1  1  0
    Pos     =   8           Output  =   ON
    
    Pos     =   5           Output  =   OFF
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;        // UINT iMask = 1;
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32))         // Filter
    {
        printf("Invalid Position, it should between 1 to 32 \n");
        return false;
    }

    iMask = iMask << (Pos - 1);         // Dynamic Mask Formation

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
    UINT Position = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    printf("Enter the Position of bit\n");
    scanf("%d",&Position);

    bRet = CheckBit(Value, Position);

    if(bRet == true)
    {
        printf("Bit at the Position %d is ON \n",Position);
    }
    else
    {
        printf("Bit at the Position %d is OFF \n",Position);
    }

    return 0;
}
