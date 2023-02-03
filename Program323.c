// Problems on Recursion.
//  Display :   *   *   *   *

#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;       // Storage Class is static

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();         // Recursive Call
    }
}

int main()
{
    printf("Inside Main \n");

    DisplayR();

    printf("End of Main \n");

    return 0;
}