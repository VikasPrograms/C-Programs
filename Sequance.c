#include<stdio.h>       //stdio means Standard input output

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;        
    int iValue2 = 0;
    int iRet = 0;           //It is a local variable //storage class is Auto

    printf("Enter first number\n");          // \n for New Line
    scanf("%d",&iValue1);           //  % for Mod , d for decimal

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}