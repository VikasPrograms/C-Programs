// Problems on Recursion.
// Accept from user and Display its Factors.

// Input = 4    Output =    1   2
// Input = 10    Output =   1   2   5

#include<stdio.h>

void FactorsR(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    FactorsR(Value);

    return 0;
}