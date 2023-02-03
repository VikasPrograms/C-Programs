// Accept from user and Display its Factors.

// Input = 4    Output =    1   2
// Input = 10    Output =   1   2   5

#include<stdio.h>

void FactorsI(int iNo)
{
    int iCnt = 1;
    
    printf("Factors is : \n");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    FactorsI(Value);

    return 0;
}