// Display the Factors.

/*
    Input : 20      Output :   1   2   4   5    10
    Input : 100      Output :   1   2   4   5   10   20   25   50
*/

#include<stdio.h>

void DisplayFactors(int iNo)
{

/*
    (8 % 1) == 0
    (8 % 2) == 0
    (8 % 3) == 0
    (8 % 4) == 0
    (8 % 5) == 0
    (8 % 6) == 0
    (8 % 7) == 0
*/

    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}