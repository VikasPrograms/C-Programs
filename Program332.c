// Accept from user and Display its Digits Count.

// Input = 4        Output =    1
// Input = 10       Output =    2
// Input = 56894    Output =    5

#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    iRet = CountDigit(Value);
    printf("Number of Digits are : %d\n",iRet);

    return 0;
}