// Problems on Recursion.
// Accept from user and Display.

// Input = 4
//  *   *   *   *

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;       // Storage Class is static

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);         // Recursive Call
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number :  \n");
    scanf("%d",&Value);

    DisplayR(Value);

    printf("\nEnd of Main \n");

    return 0;
}