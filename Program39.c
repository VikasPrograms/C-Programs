// Display Table .

/*
    Input :     5
    Output :    5   10  15  20  25  30  35  40  45  50    
*/

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    printf("_________________________\n\n");

    printf("Table of %d is : \n",iNo);

    printf("_________________________\n\n");

    for(iCnt =1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}