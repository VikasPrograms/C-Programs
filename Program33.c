// Display the Factors.

/*
    Input : 20      Output :   1   2   4   5    10
    Input : 100      Output :   1   2   4   5   10   20   25   50
*/


#include<stdio.h>

// 0(N/2)0
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors are : \n");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
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