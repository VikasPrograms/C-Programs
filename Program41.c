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
    iCnt = iNo;

    //       1          2        3
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);        // 4
        iCnt--;
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