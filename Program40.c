// Display Reverse number.

/*
    Input :     5
    Output :    5   4   3   2   1   
*/

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("------------------------------\n");
    //       1          2        3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);        // 4
    }

    printf("\n------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}