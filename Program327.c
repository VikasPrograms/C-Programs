// Problems on Recursion.
// Accept from user and Display its Factorial.

// Input = 4    Output = 24 (4 * 3 * 2 * 1)
// Input = 5    Output = 120 (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    static int iSum = 1;       // Storage Class is static

    static int iCnt = 1;       // Storage Class is static

    if(iCnt <= iNo)
    {
        iSum = iSum * iCnt;
        iCnt++;
        Factorial(iNo);     // Recursive call
    }
    return iSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    iRet = Factorial(Value);
    printf("Addition is : %d\n",iRet);

    return 0;
}