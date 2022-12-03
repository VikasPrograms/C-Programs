// Problems on Pattern Printing.

/*
    Input  :    4
    Output :    *   *   *   *   
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)  // for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}