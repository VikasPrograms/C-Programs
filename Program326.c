// Problems on Recursion.
// Accept from user and Display its Addition.

// Input = 4    Output = 10 (4 + 3 + 2 + 1)
// Input = 10    Output = 55 (10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1)

#include<stdio.h>

int AdditionR(int iNo)
{
    static int iSum = 0;       // Storage Class is static

    static int iCnt = 1;       // Storage Class is static

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(iNo);     // Recursive call
    }
    return iSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    iRet = AdditionI(Value);
    printf("Addition is : %d\n",iRet);

    return 0;
}